#ifndef EMPLEADO_H
#define EMPLEADO_H
#include<iostream>
using namespace std;

class Empleado
{
    public:
        Empleado();
        Empleado(string nombre,string apellido,double salario);
        virtual ~Empleado();
        string Apellidos();
        void obtenernombre();
        void obtenerapellido();
        void obtenersalario();
        double salarionocero(double salario);
        void salarioanual ();
        void salariodescontadoal10 ();
    protected:

    private:
        string nombre;
        string apellido;
        double salario;
};

#endif // EMPLEADO_H
