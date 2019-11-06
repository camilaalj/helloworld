#include <iostream>
#include<string>
#include "Estudiante.h"
using namespace std;

int main()
{
    Estudiante a("Juan","Rodriguez","123456");
    a.obtenernombre();
    a.obtenerapellido();
    a.obtenercodigo();
}
