#include<iostream>
#include<vector>

int main(){

    std::vector<int>vector = { 1,2,3,4,5 }; 
    int *pointer1 = nullptr; 
    int *pointer2 = nullptr; 

   pointer1 = &vector[0];
   pointer2 = &vector[vector.size() - 1];  

   std::cout<<*pointer1<<std::endl; 
   std::cout<<*pointer2<<std::endl; 


    return 0; 
}