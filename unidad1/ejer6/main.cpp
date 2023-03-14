#include<iostream>
#include"semiPrimo.h"

using namespace std; 

int main(){

    int n;
    cout<<"ingrese el valor de n: ";
    cin>>n;

    if(semiPrimo(n)){
        cout<<"el numero es semi primo"<<endl;
    }
    else{
        cout<<"el numero no es semi primo"<<endl;
    }

    return EXIT_SUCCESS; 
}