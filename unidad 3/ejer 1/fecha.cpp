#include <iostream>
#include "fecha.h"

Fecha::Fecha(int _dia, int _mes, int _anio)
{
    dia = _dia;
    mes = _mes;
    anio = _anio;
}

void Fecha::setDia(int _dia)
{
    dia = _dia;
}

void Fecha::setMes(int _mes)
{
    mes = _mes;
}

void Fecha::setAnio(int _anio)
{
    anio = _anio;
}

int Fecha::getDia()
{
    return dia;
}

int Fecha::getMes()
{
    return mes;
}

int Fecha::getAnio()
{
    return anio;
}

void Fecha::mostrarFecha()
{
    std::cout << dia << "/" << mes << "/" << anio << std::endl;
}
