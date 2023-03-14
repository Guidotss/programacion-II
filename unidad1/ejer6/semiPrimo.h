bool semiPrimo(int n){
    int i = 2;
    int cantidadDeDivisores = 0; 
    while(i <= n){
        if(n%i == 0){
            cantidadDeDivisores++; 
            n = n/i;
        }
        else{
            i++;
        }
    }
    if(cantidadDeDivisores == 2){
        return true;
    }
    return false; 
}
