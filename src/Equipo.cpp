#include "include/Equipo.h"
#include "include/Guardar.h"

#include <iostream>
#include <string>
using namespace std;

Equipo::Equipo() 
{
    id = 0;
    nombreEquipo = "";
    cantidadJugadores = 0;
}




void Equipo::setNombreEquipo(string nombreEquipo) 
{
    this->nombreEquipo = nombreEquipo;
}

void Equipo::setCantidadJugadores(int cantidadJugadores) 
{
    this->cantidadJugadores = cantidadJugadores;
}


int Equipo::getId() 
{
    return id;
}

string Equipo::getNombreEquipo() 
{
    return nombreEquipo;
}

int Equipo::getCantidadJugadores() 
{
    return cantidadJugadores;
}


void Equipo::registrar() 
{
    cout << "Registrando equipo..." << endl;
    cout << "Ingrese el nombre del equipo: ";
    cin >> nombreEquipo;
    cout << "Ingrese la cantidad de jugadores del equipo: ";
    cin >> cantidadJugadores;
    cout << "Equipo registrado exitosamente." << endl;

    Guardar g;
    g.GuardarEquipo(*this);
}

void Equipo::mostrar() 
{
    cout << "ID del equipo: " << id << endl;
    cout << "Nombre del equipo: " << nombreEquipo << endl;
    cout << "Cantidad de jugadores: " << cantidadJugadores << endl;
    
}