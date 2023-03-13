#include<iostream>


int contarDistintos(std::vector<int>& v){

    std::set<int>set{std::begin(v), std::end(v)};

    return set.size() - 1 ;
}