#include "arreglo.h"
#include<iostream>
#include<vector>

Arreglo::Arreglo(std::vector<int> v) {
    this->vector = v;
}

std::vector<int> Arreglo::sumarVector(std::vector<int> v1, std::vector<int> v2) {
    std::vector<int> v3;
    for (int i = 0; i < v1.size(); i++) {
        v3.push_back(v1[i] + v2[i]);
    }
    return v3;
}

std::vector<int> Arreglo::restarVector(std::vector<int> v1, std::vector<int> v2) {
    std::vector<int> v3;
    for (int i = 0; i < v1.size(); i++) {
        v3.push_back(v1[i] - v2[i]);
    }
    return v3;
}

std::vector<int> Arreglo::multiplicarVector(std::vector<int> v1, std::vector<int> v2) {
    std::vector<int> v3;
    for (int i = 0; i < v1.size(); i++) {
        v3.push_back(v1[i] * v2[i]);
    }
    return v3;
}

void Arreglo::mostrarVector(std::vector<int> v) {
    std::cout<<"[ "; 
    for (int i = 0; i < v.size(); i++) {
        std::cout << v[i];
        if (i != v.size() - 1) {
            std::cout << ",";
        }
        std::cout<<" ";
    }
    std::cout<<"]";
}

void Arreglo::subIndicar(std::vector<int> v, int i, int j) {
    std::cout<<"["; 
    for (int k = i; k <= j; k++) {
        std::cout << v[k];
        if (k != j) {
            std::cout << ",";
        }
        std::cout<<" ";
    }
    std::cout<<"]";
}

Arreglo::~Arreglo(){}