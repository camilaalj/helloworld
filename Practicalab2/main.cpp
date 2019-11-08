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

    Curso b ("Discretas","sdfgh",---,27);
    Curso c ("Ccomp","tgvbm",---,27);
    b.obtenernombre();
    b.obtenercodigo();
    b->obtenerdireccion();
    b.obtenercantidad();
    b.modificarnombre("ICC");
    b.modificarcodigo("fg561");
    b.modificarcantidad(26);
    b.incrementarcantidad();
}
