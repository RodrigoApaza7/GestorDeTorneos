#include "Partida.h"
#include "Guardar.h"

#include <iostream>
#include <string>
using namespace std;

Partida::Partida(): id(0), idEquipo1(0), idEquipo2(0) {}

void Partida::registrar() 
{
    cout << "Registro de Partida" << endl;
    cout << "Ingrese ID: ";
    cin >> id;
    cout << "Ingrese ID del Equipo 1: ";
    cin >> idEquipo1;
    cout << "Ingrese ID del Equipo 2: ";
    cin >> idEquipo2;

    Guardar g;
    g.GuardarPartida(*this);
}
 
void Partida::mostrar() {
    cout << "ID de la Partida: " << id << endl;
    cout << "ID del Equipo 1: " << idEquipo1 << endl;
    cout << "ID del Equipo 2: " << idEquipo2 << endl;
    
}