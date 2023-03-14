#include<iostream>
#include "numeros.h"

using namespace std;


int main(){
    
    int A, B, K; 
    cout<<"ingrese el valor de A: ";
    cin>>A; 
    cout<<"ingrese el valor de B: ";
    cin>>B; 
    cout<<"ingrese el valor de K: ";
    cin>>K; 

    cout<<"la cantidad de numeros divisibles es: "<<cantidadDeNumberosDivisibles(A, B, K)<<endl; 

    return 0;
}