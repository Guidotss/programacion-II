
bool divisoresPrimos(int n, int m){
    int i = 2;
    while(i <= n){
        if(n%i == 0){
            if(m%i == 0){
                return true;
            }
            n = n/i;
        }
        else{
            i++;
        }
    }
    return false;    
}