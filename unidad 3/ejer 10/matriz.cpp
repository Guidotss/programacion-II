#include<iostream>
#include<vector>
#include"matriz.h"

Matriz::Matriz(int filas, int columnas){
    matriz.resize(filas);
    for(int i=0; i<filas; i++){
        matriz[i].resize(columnas);
    }
}
Matriz::~Matriz(){}

void Matriz::set(int fila, int columna, int valor){
    matriz[fila][columna] = valor;
}

void Matriz::subIndicar(int fila, int columna, int valor){
    matriz[fila][columna] = valor;
}

void Matriz::subIndicarDiagonal(int fila, int columna, int valor){
    matriz[fila][columna] = valor;
}

int Matriz::get(int fila, int columna){
    return matriz[fila][columna];
}

int Matriz::getFilas(){
    return matriz.size();
}

int Matriz::getColumnas(){
    return matriz[0].size();
}

void Matriz::mostrar(){
    for(int i=0; i<matriz.size(); i++){
        for(int j=0; j<matriz[i].size(); j++){
            std::cout << matriz[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void Matriz::operator+(Matriz &m){
    if(matriz.size() == m.getFilas() && matriz[0].size() == m.getColumnas()){
        for(int i=0; i<matriz.size(); i++){
            for(int j=0; j<matriz[i].size(); j++){
                matriz[i][j] += m.get(i, j);
            }
        }
    }
}

void Matriz::operator-(Matriz &m){
    if(matriz.size() == m.getFilas() && matriz[0].size() == m.getColumnas()){
        for(int i=0; i<matriz.size(); i++){
            for(int j=0; j<matriz[i].size(); j++){
                matriz[i][j] -= m.get(i, j);
            }
        }
    }
}

void Matriz::operator*(Matriz &m){
    if(matriz[0].size() == m.getFilas()){
        std::vector<std::vector<int>> aux;
        aux.resize(matriz.size());
        for(int i=0; i<matriz.size(); i++){
            aux[i].resize(m.getColumnas());
        }
        for(int i=0; i<matriz.size(); i++){
            for(int j=0; j<m.getColumnas(); j++){
                for(int k=0; k<matriz[0].size(); k++){
                    aux[i][j] += matriz[i][k] * m.get(k, j);
                }
            }
        }
        matriz = aux;
    }
}




