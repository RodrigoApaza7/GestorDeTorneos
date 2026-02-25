#include "Partida.h"
#include "Guardar.h"
#include "Consultar.h"
#include "IdGenerador.h"

#include <iostream>
#include <string>
using namespace std;

Partida::Partida(unsigned long long idTorneo, unsigned long long idEquipo1, unsigned long long idEquipo2, const string& fecha, const string& estado) {
    id = IdGenerador::generarId(TipoObjeto::Partida);
    this->idTorneo = idTorneo;
    this->idEquipo1 = idEquipo1;
    this->idEquipo2 = idEquipo2;
    this->fecha = fecha;
    this->estado = estado;
}

Partida::Partida(unsigned long long id, unsigned long long idTorneo, unsigned long long idEquipo1, unsigned long long idEquipo2, const string& fecha, const string& estado) {
    this->id = id;
    this->idTorneo = idTorneo;
    this->idEquipo1 = idEquipo1;
    this->idEquipo2 = idEquipo2;
    this->fecha = fecha;
    this->estado = estado;
}

void Partida::setIdEquipo1(unsigned long long idEq1) {
    idEquipo1 = idEq1;
}

void Partida::setIdEquipo2(unsigned long long idEq2) {
    idEquipo2 = idEq2;
}

void Partida::setFecha(const string& fecha) {
    this->fecha = fecha;
}

void Partida::setEstado(const string& estado) {
    this->estado = estado;
}

void Partida::setIdTorneo(unsigned long long idTorneo) {
    this->idTorneo = idTorneo;
}

unsigned long long Partida::getId() const {
    return id;
}

unsigned long long Partida::getIdTorneo() const {
    return idTorneo;
}

unsigned long long Partida::getIdEquipo1() const {
    return idEquipo1;
}

unsigned long long Partida::getIdEquipo2() const {
    return idEquipo2;
}

string Partida::getFecha() const {
    return fecha;
}

string Partida::getEstado() const {
    return estado;
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
    Guardar g;
    g.GuardarPartida(*this);
}
 
void Partida::mostrar() {
    cout << "ID de la Partida: " << id << endl;
    cout << "ID del Equipo 1: " << idEquipo1 << endl;
    cout << "ID del Equipo 2: " << idEquipo2 << endl;
    
}