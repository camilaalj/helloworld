#include <iostream>
#include <string>
using namespace std;

class Trabajo{

    protected:
        double sueldo;
        int horastrabajo;

    public:
        Trabajo();
        Trabajo(double sueldo, int horastrabajo){
            this->sueldo=sueldo;
            this->horastrabajo=horastrabajo;
        }
        void mostrarDatos(){
            cout<<"Su suedo es: "<<sueldo<<endl;
            cout<<"Trabaja: "<<horastrabajo<<" horas"<<endl;
        }
};

class Doctor :public Trabajo{

    private:
        int pacientesdiarios;

    public:
        Doctor(double _sueldo,int _horastrabajo, int _pacientesdiarios):
            Trabajo(_sueldo, _horastrabajo),pacientesdiarios(_pacientesdiarios){}
        void Anadir(){
            cout<<"Atiende a: "<<pacientesdiarios<<" pacientes"<<endl;
        }

};

class Gasfitero :public Trabajo{

    private:
        string problemamascomun;

    public:
        Gasfitero(double _sueldo,int _horastrabajo, string _problemamascomun):
            Trabajo(_sueldo, _horastrabajo),problemamascomun(_problemamascomun){}
        void Anadir(){
            cout<<"Su problema mas comun es: "<<problemamascomun<<endl;
        }
};

int main()
{
    Doctor a(3200,12,25);
    a.mostrarDatos();
    a.Anadir();
    Doctor *ptr=&a;
    ptr->mostrarDatos();
    ptr->Anadir();
    cout<<endl;

    Gasfitero b(3000,10,"canerias");
    b.mostrarDatos();
    b.Anadir();
    Gasfitero *pt=&b;
    pt->mostrarDatos();
    pt->Anadir();
    return 0;
}

