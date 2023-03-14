#include<iostream>

using namespace std; 


int main(){

    int posY = 10; 
    

    cout<<"ingrese la pos en X: ";
    int posX; 
    cin>>posX; 

    cout<<"ingrese la unidad de saltos del grillo: "; 
    int unidad;
    cin>>unidad; 
    
    float saltos = (posY - posX)/unidad; 

    cout<<"los saltos a dar son: "<<saltos<<endl; 


    return 0; 
}