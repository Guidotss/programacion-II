

void cambiarValores(std::vector<int>&v){

    std::vector<int>aux(v.size());

    for(int i = 0; i < v.size(); i++){
        aux[i] = v[v.size()-1-i];
    }

    v = aux;
}