
int maximoComunDivisorRecursivo(int a, int b){
    if(a == 0){
        return b; 
    }
    return maximoComunDivisorRecursivo(b%a, a); 
}