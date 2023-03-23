#include<iostream>
#include"incremento_por_nombre.h"
#include"incremento_por_parametro.h"

int main(){

    int a = 5;

    std::cout<<"Incremento por nombre: "<<std::endl;
    incremento_por_nombre(a);

    std::cout<<"Incremento por parametro: "<<std::endl;
    incremento_por_parametro(a);
    std::cout<<"El nuevo valor de a es: "<<a<<std::endl;

    

    return 0; 
}