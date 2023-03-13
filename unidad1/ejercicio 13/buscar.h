

int buscarIndex(std::vector<int>&v,k){

    for(int i = 0; i < v.size(); i++){
       if(v[i] == k){
           return i;
       }
    }

    return -1;
}