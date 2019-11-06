#include <iostream>
#include "Empleado.h"
#include <string>
using namespace std;

int main()
{
    Empleado a("Gabriela","Soto",1250);
    a.obtenernombre();
    a.obtenerapellido();
    a.obtenersalario();
    a.salarioanual();
    a.salariodescontadoal10();
    a.salarioanual();
    cout<<endl;

    Empleado b("Juan","Escobedo",1300.5);
    b.obtenernombre();
    b.obtenerapellido();
    b.obtenersalario();
    b.salarioanual();
    b.salariodescontadoal10();
    b.salarioanual();
    cout<<endl;

    Empleado c("Laura","Solorzano",1100.3);
    c.obtenernombre();
    c.obtenerapellido();
    c.obtenersalario();
    c.salarioanual();
    c.salariodescontadoal10();
    c.salarioanual();
    cout<<endl;

    int tam=3;
    Empleado arr[]={a,b,c};

    for (int k=tam;k>0;k--){
        for (int i=0;i<k-1;i++){
            int s=static_cast <int>(arr[i].Apellidos()[0]);
            int d=static_cast <int>(arr[i+1].Apellidos()[0]);
            if (s>d){
                swap(arr[i],arr[i+1]);
            }
            if (s==d){
                int w=0;
                while(w<arr[i].Apellidos().size()&& w<arr[i+1].Apellidos().size()){
                    int g=static_cast <int>(arr[i].Apellidos()[w]);
                    int h=static_cast <int>(arr[i+1].Apellidos()[w]);
                    if (g>h){
                        swap(arr[i],arr[i+1]);
                        break;
                    }
                    w++;
                }
            }
        }
    }
    for (int i=0;i<tam;i++){
        cout << arr[i].Apellidos()<<endl;
    }
}
