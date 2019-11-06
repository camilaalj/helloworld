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
}
