

int buscarIndex(std::vector<int>&v, int k){

    for(size_t i = 0; i < v.size(); i++){
       if(v[i] == k){
           return i;
       }
    }

    return -1;
}