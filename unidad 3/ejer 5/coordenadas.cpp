#include <iostream>
#include <cmath>
#include "coordenadas.h"

Coordenadas::Coordenadas()
{
    x = 0;
    y = 0;
    z = 0;
}

Coordenadas::Coordenadas(int _x, int _y, int _z)
{
    x = _x;
    y = _y;
    z = _z;
}

Coordenadas::~Coordenadas() {}

void Coordenadas::setX(int _x)
{
    x = _x;
}

void Coordenadas::setY(int _y)
{
    y = _y;
}

void Coordenadas::setZ(int _z)
{
    z = _z;
}

int Coordenadas::getX()
{
    return x;
}

int Coordenadas::getY()
{
    return y;
}

int Coordenadas::getZ()
{
    return z;
}

void Coordenadas::disminuirCoordenadas()
{
    x--;
    y--;
    z--;
}

void Coordenadas::aumentarCoordenadas()
{
    x += 2;
    y += 2;
    z += 2;
}

void Coordenadas::aumentarCoodenadas(int val)
{
    x += val;
    y += val;
    z += val;
}

void Coordenadas::mostrarCoordenadas()
{
    std::cout << "x: " << x << " y: " << y << " z: " << z << std::endl;
}

void Coordenadas::polares()
{
    double r = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
    double theta = acos(z / r);
    double phi = atan(y / x);
    std::cout << "r: " << r << " theta: " << theta << " phi: " << phi << std::endl;
}
