#include <iostream>
#include "Vector.h"
#include <cmath>

Vector::Vector()
{

}
double Vector::CalcularModulo(){
    return sqrt((pow(fin.x - inicio.x,2))+(pow(fin.y -inicio.y,2)));
}
void Vector::modificarPuntoInicial(double nx, double ny){
    inicio.modificar(nx,ny);
}
void Vector::modificarPuntoFinal(double nx, double ny){
    fin.modificar(nx,ny);
}
void Vector::imprimir(){
    inicio.imprimir();
    cout<< " -> ";
    fin.imprimir();
}


