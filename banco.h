#ifndef BANCO_H_INCLUDED
#define BANCO_H_INCLUDED
#include <iostream>
using namespace std;

class Banco {
    private:
    string _nombre;
    double _tasa[3];

    public:
    //CONSTRUCTORES
    Banco();
    Banco (string nombre);

    // SETTERS
    void setNombre(string nombre);
    void setTasa(int pos, double tasa);

    //GETTERS
    string getNombre();
    double getTasa(int pos);

    //METODOS

    string toString();
    double calcularPromedio();
    double rendimientoAnual(double capital);
    double rendimientoTrimestral(double capital);
    double rendimientoMensual(double capital);


};

#endif // BANCO_H_INCLUDED
