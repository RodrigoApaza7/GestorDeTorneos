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

void Usuario::setUsername(const string& u) {
    username = u;
}

void Usuario::setPassword(const string& p) {
    password = p;
}

void Usuario::setRol(const string& r) {
    rol = r;
}

string Usuario::getUsername() const {
    return username;
}

string Usuario::getPassword() const {
    return password;
}

string Usuario::getRol() const {
    return rol;
}

bool Usuario::login(string u, string p) 
{
    return (username == u && password == p);
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

