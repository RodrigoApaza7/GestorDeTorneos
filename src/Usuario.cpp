#include "Usuario.h"
#include "Guardar.h"
#include "Consultar.h"
#include "IdGenerador.h"
#include <iostream>
#include <string>
using namespace std;

Usuario::Usuario(const string& username, const string& password, const string& rol) 
{
    id = IdGenerador::generarId(TipoObjeto::Usuario);
    this->username = username;
    this->password = password;
    this->rol = rol;
}

Usuario::Usuario(unsigned long long id, const string& username, const string& password, const string& rol) 
{
    this->id = id;
    this->username = username;
    this->password = password;
    this->rol = rol;
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

unsigned long long Usuario::getId() const {
    return id;
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
    cout << " Ingrese la contrasenia: ";
    cin >> password;
    cout << "Ingrese el rol ";
    cin >> rol;

    Guardar g;
    g.GuardarUsuario(*this);
}

void Usuario::mostrar() 
{
    cout << "Datos del Usuario" << endl;
    cout << "ID: " << id << endl;
    cout << "Username: " << username << endl;
    cout << "Password: " << password << endl;
    cout << "Rol: " << rol << endl;
}