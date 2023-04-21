#include "numeroComplejo.h"

int main()
{

    NumeroComplejo n1(1, 2);
    NumeroComplejo n2(4, 2);

    NumeroComplejo n3 = n1 + n2;

    n3.mostrarNumeroComplejo();

    n3 = n1 - n2;

    n3.mostrarNumeroComplejo();

    n3 = n1 * n2;

    n3.mostrarNumeroComplejo();

    return 0;
}