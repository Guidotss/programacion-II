#include<iostream>
#include"divisoresPrimos.h"


using namespace std; 


int main(){

    int n, m;
    cout<<"ingrese el valor de n: ";
    cin>>n;
    cout<<"ingrese el valor de m: ";
    cin>>m;

    if(divisoresPrimos(n, m)){
        cout<<"n y m tienen divisores primos en comun"<<endl;
    }
    else{
        cout<<"n y m no tienen divisores primos en comun"<<endl;
    }

    



    return EXIT_SUCCESS; 
}