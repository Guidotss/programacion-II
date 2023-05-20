#include<iostream>
#include<memory>
#include"./personaje/personaje.h"
#include"./personaje/mago/mago.h"

int main(){
    
    
    try{ 
        std::unique_ptr<Personaje> p1 = std::make_unique<Mago>();
        std::unique_ptr<Personaje> p2 = std::make_unique<Mago>();
    }catch(std::bad_alloc& e){
        std::cout << "Error: " << e.what() << std::endl;
    }

    


    return 0; 
}