#include "include/Usuario.h"
#include <iostream>
#include <string>
using namespace std;

Usuario::Usuario() 
{

    username = "";
    password = "";
    rol = "";
    
}

void Usuario::Registrar() 
{
    cout << "ingrese los datos: ";
    cout << "Nombre del usuario " << endl;
    cin >> username;
    cout << " Ingrese la contraseña: ";
    cin >> password;
    cout << "Ingrese el rol ";
    cin >> rol;
}

