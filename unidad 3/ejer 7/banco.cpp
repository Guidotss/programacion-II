#include <iostream>
#include "banco.h"

Banco::Banco(int _numero, float _interes)
{
    numero = _numero;
    interes = _interes;
    saldo = 0;
}

void Banco::setNumero(int _numero)
{
    numero = _numero;
}

int Banco::getNumero()
{
    return numero;
}

void Banco::setSaldo(float _saldo)
{
    saldo = _saldo;
}

float Banco::getSaldo()
{
    return saldo;
}

void Banco::setInteres(float _interes)
{
    interes = _interes;
}

float Banco::getInteres()
{
    return interes;
}

void Banco::depositar(float _monto)
{
    saldo += _monto;
}

void Banco::retirar(float _monto)
{
    saldo -= _monto;
}

void Banco::acrecentarInteres()
{
    saldo += saldo * interes;
}

void Banco::mostrar()
{
    std::cout << "El numero de cuenta es: " << numero << std::endl;
    std::cout << "El saldo es: " << saldo << std::endl;
    std::cout << "El interes es: " << interes << std::endl;
}

Banco::~Banco() {}
