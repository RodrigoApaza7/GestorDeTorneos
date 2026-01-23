#include "include/Partida.h"
#include "include/Guardar.h"

#include <iostream>
#include <string>
using namespace std;

Partida::Partida(): id(0), idEquipo1(0), idEquipo2(0), resultadoEquipo1(0), resultadoEquipo2(0) {}

void Partida::registrar() {

    cout << "Registrando Primer Equipo: " << endl;
    cout << "Ingrese el nombre del Primer Equipo: "<<endl;
    cin >> idEquipo1;
    cout << "Ingrese el nombre del Sefundo Equipo: "<<endl;
    cin >> idEquipo2;
    cout << "ingrese el resultado del primero equipo: ";
    cin >> resultadoEquipo1;
   cout << "ingrese el resultado del segundo equipo: ";
    cin >> resultadoEquipo2;
    cout << "datos registrados exitosamnete " << endl;

    Guardar g;
    g.GuardarPartida(*this);
}
 
void Partida::mostrar() {
    cout << "ID de la Partida: " << id << endl;
    cout << "ID del Equipo 1: " << idEquipo1 << endl;
    cout << "ID del Equipo 2: " << idEquipo2 << endl;
    cout << "Resultado del Equipo 1: " << resultadoEquipo1 << endl;
    cout << "Resultado del Equipo 2: " << resultadoEquipo2 << endl;
}