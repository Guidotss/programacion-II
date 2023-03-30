#include"coordenadas.h"


int main(){

    Coordenadas c1(1,2,3);
    Coordenadas c2(4,5,6);


    c1.mostrarCoordenadas();
    c2.mostrarCoordenadas();

    c1.aumentarCoordenadas();
    c2.aumentarCoordenadas();

    c1.mostrarCoordenadas();
    c2.mostrarCoordenadas();

    c1.aumentarCoodenadas(5);
    c2.aumentarCoodenadas(5);

    c1.mostrarCoordenadas();
    c2.mostrarCoordenadas();

    c1.disminuirCoordenadas();
    c2.disminuirCoordenadas();

    c1.mostrarCoordenadas();
    c2.mostrarCoordenadas();

    c1.polares();
    c2.polares();


    return 0; 
}