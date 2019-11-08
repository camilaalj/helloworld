#ifndef CURSO_H
#define CURSO_H
#include <iostream>
#include<string>

class Curso
{
    public:
        Curso();
        Curso(Curso&q);
        Curso(string nombre,string codigo,Estudiante *alumnos,int cantidadalumnos);
        virtual ~Curso();
        string obtenernombre();
        string obtenercodigo();
        Estudiante *obtenerdireccion();
        int obtenercantidad();
        void modificarnombre(string nombre);
        void modificarcodigo(string codigo);
        void modificardireccion(Estudiante *alumnos);
        void modificarcantidad(int cantidadalumnos);
        void incrementarcantidad();
    protected:

    private:
        string nombre;
        string codigo;
        Estudiante *alumnos;
        int cantidadalumnos;
};

#endif // CURSO_H
