#include "Partida.h"
#include "Guardar.h"
#include "Consultar.h"
#include "IdGenerador.h"

#include <iostream>
#include <string>
using namespace std;

Partida::Partida(): idEquipo1(0), idEquipo2(0) {
    id = IdGenerador::generarId(TipoObjeto::Partida);
}

void Partida::setIdEquipo1(int idEq1) {
    idEquipo1 = idEq1;
}

void Partida::setIdEquipo2(int idEq2) {
    idEquipo2 = idEq2;
}

unsigned long long Partida::getId() const {
    return id;
}

int Partida::getIdTorneo() const {
    return idTorneo;
}

int Partida::getIdEquipo1() const {
    return idEquipo1;
}

int Partida::getIdEquipo2() const {
    return idEquipo2;
}

int Partida::getResultadoEquipo1() const {
    // Aquí deberías implementar la lógica para obtener el resultado del Equipo 1
    return 0; // Placeholder
}

int Partida::getResultadoEquipo2() const {
    // Aquí deberías implementar la lógica para obtener el resultado del Equipo 2
    return 0; // Placeholder
}

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