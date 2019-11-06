#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <iostream>
#include<string>
using namespace std;

class Estudiante
{
    public:
        Estudiante();
        Estudiante(string nombre,string apellido,string codigo);
        virtual ~Estudiante();
        void obtenernombre();
        void obtenerapellido();
        void obtenercodigo();
    protected:

    private:
        string nombre;
        string apellido;
        string codigo;
};

#endif // ESTUDIANTE_H
