#include<iostream>
#include<string>


int main(){

    std::cout<<"Ingrese una palabra: ";
    std::string palabra;
    std::cin>>palabra;

    std::string *pointer=&palabra;

    for(int i = 0; i < pointer->size(); i++){
        std::cout<<pointer->at(i)<<std::endl;
    }

    for(int i = pointer->size() -1; i>0; i--){
        std::cout<<pointer->at(i)<<std::endl;
    }

    return 0; 
}

