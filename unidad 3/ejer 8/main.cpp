#include"persona.h"


int main(){

    Persona p1("Juan", 20, "Masculino", 12345678, "01/01/2000", 80, 1.80);
    p1.mostrar();
    p1.calcularIMC();
    p1.esMayorDeEdad();

    return 0; 
}