#include"banco.h"


int main(){

    Banco cuenta1(1234, 0.05);
    cuenta1.depositar(1000);
    cuenta1.mostrar();

    cuenta1.acrecentarInteres();
    cuenta1.mostrar();

    cuenta1.retirar(500);
    cuenta1.mostrar();

    cuenta1.acrecentarInteres();
    cuenta1.mostrar();

    

    return 0; 
}