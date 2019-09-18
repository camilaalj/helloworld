#include <iostream>
#include "Punto.h"
#include "Vector.h"
using namespace std;

int main()
{
    Vector v;
    v.modificarPuntoFinal(2,5);
    v.imprimir();
    cout<<"El modulo es: "<<v.CalcularModulo()<<endl;
    return 0;
}
