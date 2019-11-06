#include "Estudiante.h"

Estudiante::Estudiante()
{
    nombre="";
    apellido="";
    codigo="";
}

Estudiante::Estudiante(string nombre,string apellido,string codigo)
{
    this->nombre=nombre;
    this->apellido=apellido;
    this->codigo=codigo;
}

Estudiante::~Estudiante()
{
    //dtor
}

void Estudiante::obtenernombre(){
    cout<<"Nombre: "<<nombre<<endl;
}
void Estudiante::obtenerapellido(){
    cout<<"Apellido: "<<apellido<<endl;
}
void Estudiante::obtenercodigo(){
    cout<<"Codigo: "<<codigo<<endl;
}
