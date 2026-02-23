#include "Ranking.h"
#include "Guardar.h"
#include "Consultar.h"
#include "IdGenerador.h"

#include <iostream>
using namespace std;

Ranking::Ranking() 
{
    id = IdGenerador::generarId(TipoObjeto::Ranking);
    idTorneo = 0;
    idEquipo = 0;
    posicion = 0;
    puntos = 0;
}

void Ranking::setidTorneo(int idTorneo) 
{
    this->idTorneo = idTorneo;
}

void Ranking::setidEquipo(int idEquipo) 
{
    this->idEquipo = idEquipo;
}

void Ranking::setposicion(int posicion) 
{
    this->posicion = posicion;
}

void Ranking::setpuntos(int puntos) 
{
    this->puntos = puntos;
}

unsigned long long Ranking::getId() const 
{
    return id;
}

int Ranking::getidTorneo() 
{
    return idTorneo;
}

int Ranking::getidEquipo() 
{
    return idEquipo;
}

int Ranking::getposicion() 
{
    return posicion;
}

int Ranking::getpuntos() 
{
    return puntos;
}

void Ranking::registrar() 
{
    cout << "Registro de Ranking" << endl;
    cout << "Ingrese ID del Torneo: ";
    cin >> idTorneo;
    cout << "Ingrese ID del Equipo: ";
    cin >> idEquipo;
    cout << "Ingrese Posición: ";
    cin >> posicion;
    cout << "Ingrese Puntos: ";
    cin >> puntos;

    Guardar g;
    g.GuardarRanking(*this);

    cout << "Datos registrados exitosamente." << endl;
}