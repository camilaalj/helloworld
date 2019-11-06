#include "Empleado.h"

Empleado::Empleado()
{
    nombre="";
    apellido="";
    salario=0;
}

Empleado::Empleado(string nombre,string apellido,double salario)
{
    this->nombre=nombre;
    this->apellido=apellido;
    this->salario=salario;
}

Empleado::~Empleado()
{
    //dtor
}
string Empleado::Apellidos(){
    return apellido;
}

void Empleado::obtenernombre(){
    cout<<"Nombre: "<<nombre<<endl;
}

void Empleado::obtenerapellido(){
    cout<<"Apellido: "<<apellido<<endl;
}
void Empleado::obtenersalario (){
    cout<<"Salario: "<<salarionocero(salario)<<endl;
}

double Empleado::salarionocero(double salario){
    if (salario<0){
        return 0;
    }
    return salario;
}
void Empleado::salarioanual (){
    salarionocero(salario*14); //14 sueldos incluidos
}
void Empleado::salariodescontadoal10 (){
    salario=salario*0.9;
    cout<<"Su salario descontado es: "<<salarionocero(salario)<<endl;
}

