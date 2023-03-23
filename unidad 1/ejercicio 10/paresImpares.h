

void paresImpares(std::vector<int>&v1){
    std::vector<int>pares; 
    std::vector<int>inpares; 


    for(size_t i = 0; i < v1.size(); i++){
        if(v1[i] % 2 == 0){
            pares.push_back(v1[i]);
        }else{
            inpares.push_back(v1[i]);
        }
    }

    for(size_t i = 0; i < inpares.size(); i++){
        pares.push_back(inpares[i]);
    }

    for(size_t i = 0; i < pares.size(); i++){
        v1[i] = pares[i];
    }
}