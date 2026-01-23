#include "include/doctor.h"
#include <iostream>
#include <string>
using namespace std;

Doctor::Doctor() 
{
    id = 0;
    nombre = "";
    especialidad = "";
    telefono = "";
}

void Doctor::SetEspecialidad(string especialidad) 
{
    this->especialidad = especialidad;
}

void Doctor::SetTelefono(string telefono) 
{
    this->telefono = telefono;
}

void Doctor::registrar() 
{
    cout << "Registro de Doctor" << endl;
    cout << "Ingrese ID: ";
    cin >> id;
    cout << "Ingrese Nombre: ";
    cin >> nombre;
    cout << "Ingrese Especialidad: ";
    cin >> especialidad;
    cout << "Ingrese Telefono: ";
    cin >> telefono;
}

void Doctor::mostrar() 
{
    cout << "Datos del Doctor" << endl;
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Especialidad: " << especialidad << endl;
    cout << "Telefono: " << telefono << endl;
}