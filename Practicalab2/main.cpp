#include <iostream>
#include<string>
#include "Estudiante.h"
#include "Curso.h"
using namespace std;

int main()
{
    Estudiante a("Juan","Rodriguez","123456");
    a.obtenernombre();
    a.obtenerapellido();
    a.obtenercodigo();
    cout<<endl;
    Estudiante g("Pedro","Vasquez","987632");
    g.obtenernombre();
    g.obtenerapellido();
    g.obtenercodigo();

    Estudiante arr[1]={a};
    Estudiante arre[1]={g};
    cout<<endl<<arre<<endl;

    Curso b ("Discretas","sdfgh",arr,27);
    Curso c ("Ccomp","tgvbm",arre,24);
    Curso* d=&b;
    Curso* e=&c;

    cout<<b.obtenernombre()<<endl;
    cout<<b.obtenercodigo()<<endl;
    cout<<d->obtenerdireccion()<<endl;
    cout<<b.obtenercantidad()<<endl;
    cout<<endl;

    cout<<"Modificando valores"<<endl;

    b.modificarnombre("ICC");
    b.modificarcodigo("fg561");
    d->modificardireccion(arre);
    b.modificarcantidad(29);
    b.incrementarcantidad();
    cout<<b.obtenernombre()<<endl;
    cout<<b.obtenercodigo()<<endl;
    cout<<d->obtenerdireccion()<<endl;
    cout<<b.obtenercantidad()<<endl;
    cout<<endl;

    cout<<c.obtenernombre()<<endl;
    cout<<c.obtenercodigo()<<endl;
    cout<<e->obtenerdireccion()<<endl;
    cout<<c.obtenercantidad()<<endl;
    cout<<endl;

    cout<<"Modificando valores"<<endl;
    c.modificarnombre("Mat");
    c.modificarcodigo("fgdfd");
    e->modificardireccion(arr);
    c.modificarcantidad(19);
    c.incrementarcantidad();
    cout<<c.obtenernombre()<<endl;
    cout<<c.obtenercodigo()<<endl;
    cout<<e->obtenerdireccion()<<endl;
    cout<<c.obtenercantidad()<<endl;
}
