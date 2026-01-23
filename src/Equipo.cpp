#include "include/Equipo.h"
#include <iostream>
#include <string>
using namespace std;

Equipo::Equipo() 
{
    id = 0;
    nombreEquipo = "";
    cantidadJugadores = 0;
}

void Equipo::registrar() 
{
    cout << "Registrando equipo..." << endl;
    cout << "Ingrese el nombre del equipo: ";
    cin >> nombreEquipo;
    cout << "Ingrese la cantidad de jugadores del equipo: ";
    cin >> cantidadJugadores;
    cout << "Equipo registrado exitosamente." << endl;
}

void Equipo::mostrar() 
{
    cout << "ID del equipo: " << id << endl;
    cout << "Nombre del equipo: " << nombreEquipo << endl;
    cout << "Cantidad de jugadores: " << cantidadJugadores << endl;
}