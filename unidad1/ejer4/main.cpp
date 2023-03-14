#include<iostream>
#include "factorial.h"

using namespace std; 


int main(){

    cout<<"ingrese el valor de n: ";
    int n;
    cin>>n;

    cout<<"el factorial de n es: "<<factorialRecusivo(n)<<endl;

    return 0; 
}