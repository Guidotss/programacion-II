#include<iostream>
#include<vector>

int main(){

    std::vector<int>vector = { 1,2,3,4,5 }; 
    int *pointer = nullptr; 

    for(int i = 0; i < vector.size(); i++){
        pointer = &vector[i]; 
        std::cout << pointer << std::endl;
    }

    return 0; 
}