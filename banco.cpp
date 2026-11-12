#include <iostream>
#include <iomanip>
#include "banco.h"
using namespace std;

///CONSTRUCTORES
Banco::Banco()
{
    _nombre = "Sin_Nombre";
    for(int i=0; i<3; i++)
    {
        _tasa[i] = 0;
    }
}

Banco::Banco(string nombre)
{
    _nombre = nombre;
    for(int i=0; i<3; i++)
    {
        _tasa[i] = 0;
    }
}

//SET
void Banco::setNombre(string nombre)
{
    _nombre = nombre;
}

void Banco::setTasa(int pos, double tasa)
{
    if(pos >= 0 && pos < 3)
    {
        _tasa[pos] = tasa;
    }
}

//GET
string Banco::getNombre()
{
    return _nombre;
}

double Banco::getTasa(int pos)
{
    if(pos >= 0 && pos < 3)
    {
        return _tasa[pos];
    }

    return 0;
}

double Banco::calcularPromedio()
{
    return (_tasa[0] + _tasa[1] + _tasa[2]) / 3;
}

///RENDIMIENTOS

double Banco::rendimientoAnual(double capital)
{
    double promedio;

    promedio = calcularPromedio();

    return capital * (1 + promedio / 100);
}

double Banco::rendimientoTrimestral(double capital)
{
    double tasaPeriodo = calcularPromedio() / 100 / 4;

    for(int i = 0; i < 4; i++)
    {
        capital = capital * (1 + tasaPeriodo);
    }

    return capital;
}

double Banco::rendimientoMensual(double capital)
{
    double tasaPeriodo = calcularPromedio() / 100 / 12;

    for(int i = 0; i < 12; i++)
    {
        capital = capital * (1 + tasaPeriodo);
    }

    return capital;
}
