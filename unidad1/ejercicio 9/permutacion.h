

bool permutacion(std::vector<int>v1){
    for(int i = 0; i < v1.size(); i++){
        for(int j = 0; j < v1.size(); j++){
            if(v1[i] == v1[j] && i != j){
                return false; 
            }
        }
    }
    return true; 
}