#include<iostream>
#include"intercambiar.h"

using namespace std; 


int main(){

    int a, b;

    cout<<"ingrese el valor de a: ";
    cin>>a;
    cout<<"ingrese el valor de b: ";
    cin>>b;

    intercambiarValores(a, b);

    cout<<"el valor de a es: "<<a<<endl;
    cout<<"el valor de b es: "<<b<<endl;

    

    return EXIT_SUCCESS;
}