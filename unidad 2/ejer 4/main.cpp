#include<iostream>
#include<vector>
#include<cstdlib>


int main(){

    
    std::vector<int>vector; 

    for(int i = 0; i < 15; i++){
        vector.push_back(rand()%100 + 1);
    }

    int *pointer = vector.data();

    for(int i = 0; i < vector.size(); i++){
        std::cout << pointer[i] << std::endl;
    }


    return 0; 
}