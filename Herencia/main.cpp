#include <iostream>
#include <string>
using namespace std;

class Trabajo{
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
    protected:
        double sueldo;
        int horastrabajo;
};

class Doctor :public Trabajo{
    public:
        Doctor(double _sueldo,int _horastrabajo, int _pacientesdiarios):
            Trabajo(_sueldo, _horastrabajo),pacientesdiarios(_pacientesdiarios){}
        void Anadir(){
            cout<<"Atiende a: "<<pacientesdiarios<<" pacientes"<<endl;
        }
    private:
        int pacientesdiarios;
};

class Gasfitero :public Trabajo{
    public:
        Gasfitero(double _sueldo,int _horastrabajo, string _problemamascomun):
            Trabajo(_sueldo, _horastrabajo),problemamascomun(_problemamascomun){}
        void Anadir(){
            cout<<"Su problema mas comun es: "<<problemamascomun<<endl;
        }
    private:
        string problemamascomun;;
};

int main()
{
    Doctor a(3200,12,25);
    a.mostrarDatos();
    a.Anadir();
    cout<<endl;
    Gasfitero b(3000,10,"canerias");
    b.mostrarDatos();
    b.Anadir();
    return 0;
}

