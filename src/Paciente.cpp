#include "include/Paciente.h"
#include <iostream>
#include <string>
using namespace std;

Paciente::Paciente() 
{
    id = 0;
    nombre = "";
    dni = "";
    edad = 0;
    direccion = "";
    telefono = "";
}

void Paciente::setdireccion(string direccion) 
{
    this->direccion = direccion;
}

void Paciente::settelefono(string telefono) 
{
    this->telefono = telefono;
}

void Paciente::registrar() 
{
    cout << "Registro de Paciente" << endl;
    cout << "Ingrese ID: ";
    cin >> id;
    cout << "Ingrese Nombre: ";
    cin >> nombre;
    cout << "Ingrese DNI: ";
    cin >> dni;
    cout << "Ingrese Edad: ";
    cin >> edad;
    cout << "Ingrese Direccion: ";
    cin >> direccion;
    cout << "Ingrese Telefono: ";
    cin >> telefono;
}

void Paciente::mostrar() 
{
    cout << "Datos del Paciente" << endl;
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "DNI: " << dni << endl;
    cout << "Edad: " << edad << endl;
    cout << "Direccion: " << direccion << endl;
    cout << "Telefono: " << telefono << endl;
}