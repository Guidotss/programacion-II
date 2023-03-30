#include "racional.h"


int main(){

    Racional r1(1,2);
    Racional r2(4,2);
    

    Racional r3 = r1.sumarRacional(r2);

    r3.mostrarRacional();

    r3 = r1.restarRacional(r2);

    r3.mostrarRacional();

    r3 = r1.incrementarEnUno();

    r3.mostrarRacional();

    r3 = r1.decrementarEnUno();

    r3.mostrarRacional();

    r3 = r2.simplificarRacional();

    r3.mostrarRacional();
    


    return 0; 
}