#include <iostream>
#include "Menu.h"
#include "Guardar.h"
#include "Consultar.h"
#include "idGenerador.h"
using namespace std;

int main()
{
    IdGenerador idGen;
    idGen.cargarContadores();

    Menu menu;
    menu.mostrarMenuPrincipal();

    system("pause");
    return 0;
}