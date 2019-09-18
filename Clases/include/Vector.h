#ifndef VECTOR_H
#define VECTOR_H

#include "Punto.h"
using namespace std;

class Vector
{
    public:
        Punto inicio,fin;
        Vector();
        void modificarPuntoInicial(double nx, double ny);
        void modificarPuntoFinal(double nx, double ny);
        void imprimir();
        double CalcularModulo();

};


#endif
