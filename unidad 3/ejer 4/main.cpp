#include"cronometro.h"


int main(){

    Cronometro cronometro1(23, 59, 58);

    cronometro1.mostrarHora();

    cronometro1.avanzarSegundo();

    cronometro1.mostrarHora();



    return 0; 
}