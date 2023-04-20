#include<iostream>
#include"conjunto.h"

Conjunto::Conjunto(){
    elementos = new int[0];
    numElementos = 0;
}


Conjunto::Conjunto(int *elementos, int numElementos){
    this->elementos = new int[numElementos];
    for(int i=0; i<numElementos; i++){
        this->elementos[i] = elementos[i];
    }
    this->numElementos = numElementos;
}

Conjunto::Conjunto(const Conjunto &c){
    elementos = new int[c.numElementos];
    for(int i=0; i<c.numElementos; i++){
        elementos[i] = c.elementos[i];
    }
    numElementos = c.numElementos;
}

Conjunto::~Conjunto(){
    delete[] elementos;
}

void Conjunto::mostrar(){
    for(int i=0; i<numElementos; i++){
        std::cout << elementos[i] << " ";
    }
    std::cout << std::endl;
}

void Conjunto::agregarElemento(int elemento){
    int *aux = new int[numElementos+1];
    for(int i=0; i<numElementos; i++){
        aux[i] = elementos[i];
    }
    aux[numElementos] = elemento;
    delete[] elementos;
    elementos = aux;
    numElementos++;
}

void Conjunto::eliminarElemento(int elemento){
    int *aux = new int[numElementos-1];
    int j=0;
    for(int i=0; i<numElementos; i++){
        if(elementos[i] != elemento){
            aux[j] = elementos[i];
            j++;
        }
    }
    delete[] elementos;
    elementos = aux;
    numElementos--;
}

void Conjunto::operator+(Conjunto &c){
    for(int i=0; i<c.numElementos; i++){
        agregarElemento(c.elementos[i]);
    }
}

void Conjunto::operator-(Conjunto &c){
    for(int i=0; i<c.numElementos; i++){
        eliminarElemento(c.elementos[i]);
    }
}

void Conjunto::operator*(Conjunto &c){
    int *aux = new int[numElementos];
    int j=0;
    for(int i=0; i<numElementos; i++){
        for(int k=0; k<c.numElementos; k++){
            if(elementos[i] == c.elementos[k]){
                aux[j] = elementos[i];
                j++;
            }
        }
    }
    delete[] elementos;
    elementos = aux;
    numElementos = j;
}

