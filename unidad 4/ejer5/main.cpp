#include<iostream>
#include<memory>
#include"./personaje/personaje.h"
#include"./personaje/mago/mago.h"

int main(){
   
    try{ 
        std::unique_ptr<Personaje> mago = std::make_unique<Mago>();
        mago->mostrar_stats();

        
    }catch(std::bad_alloc& e){
        std::cout << "Error: " << e.what() << std::endl;
    }

    return 0; 
}