#include<iostream>
#include "maximoComunDivisor.h"

using namespace std; 

int main(){
    
    int a, b;

    cout<<"ingrese el valor de a: ";
    cin>>a;
    cout<<"ingrese el valor de b: ";
    cin>>b;

    cout<<"el maximo comun divisor es: "<<maximoComunDivisorRecursivo(a, b)<<endl;


    return 0; 
}
