#include <iostream>
#include <vector>
#include "arreglo.h"

int main(){

    std::vector<int> v1 = {1, 2, 3, 4, 5};
    std::vector<int> v2 = {6, 7, 8, 9, 10};

    Arreglo a(v1);
    a.mostrarVector(a.sumarVector(v1, v2));
    std::cout << std::endl;
    a.mostrarVector(a.restarVector(v1, v2));
    std::cout << std::endl;

    a.mostrarVector(a.multiplicarVector(v1, v2));
    std::cout << std::endl;

    a.subIndicar(v1, 1, 3);





    return 0; 
}