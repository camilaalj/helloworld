#include "Curso.h"

Curso::Curso()
{
    //ctor
}

Curso::Curso(Curso&q)
{
    nombre=q.nombre;
    codigo=q.codigo;
    alumnos=q.alumnos;
    cantidadalumnos=q.cantidadalumnos;
}

Curso::Curso(string nombre,string codigo,Estudiante *alumnos,int cantidadalumnos)
{
    this->nombre=nombre;
    this->codigo=codigo;
    alumnos=alumnos;
    this->cantidadalumnos=cantidadalumnos;
}

Curso::~Curso()
{
    //dtor
}

string Curso::obtenernombre(){
    return nombre;
}
string Curso::obtenercodigo(){
    return codigo;
}
Estudiante *Curso::obtenerdireccion(){
    return alumnos;
}
int Curso::obtenercantidad(){
    return cantidadalumnos;
}

void Curso::modificarnombre(string nombre){
    this->nombre=nombre;
}
void Curso::modificarcodigo(string codigo){
    this->codigo=codigo;
}
void Curso::modificardireccion(Estudiante *alumnos){
    this->alumnos=alumnos;
}
void Curso::modificarcantidad(int cantidadalumnos){
    this->cantidadalumnos=cantidadalumnos;
}

void Curso::incrementarcantidad(){
    cantidadalumnos+=1;
}
