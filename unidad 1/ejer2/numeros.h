
int cantidadDeNumberosDivisibles(int A, int B, int K){
    int cantidadDeNumerosDivisibles = 0; 
    for(int i = A; i<=B; i++){
        if(i%K == 0){
            cantidadDeNumerosDivisibles++; 
        }
    }
    return cantidadDeNumerosDivisibles; 
}