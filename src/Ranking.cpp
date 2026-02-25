#include "Ranking.h"
#include "Guardar.h"
#include "Consultar.h"
#include "IdGenerador.h"

#include <iostream>
using namespace std;

Ranking::Ranking(unsigned long long idTorneo, unsigned long long idEquipo, int posicion, int puntos) 
{
    id = IdGenerador::generarId(TipoObjeto::Ranking);
    this->idTorneo = idTorneo;
    this->idEquipo = idEquipo;
    this->posicion = posicion;
    this->puntos = puntos;
}

Ranking::Ranking(unsigned long long id, unsigned long long idTorneo, unsigned long long idEquipo, int posicion, int puntos)
{
    this->id = id;
    this->idTorneo = idTorneo;
    this->idEquipo = idEquipo;
    this->posicion = posicion;
    this->puntos = puntos;
}

void Ranking::setidTorneo(unsigned long long idTorneo) 
{
    this->idTorneo = idTorneo;
}

void Ranking::setidEquipo(unsigned long long idEquipo) 
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

unsigned long long Ranking::getIdTorneo() 
{
    return idTorneo;
}

unsigned long long Ranking::getIdEquipo() 
{
    return idEquipo;
}

int Ranking::getPosicion() 
{
    return posicion;
}

int Ranking::getPuntos() 
{
    return puntos;
}

void Ranking::registrar() 
{
    Guardar g;
    g.GuardarRanking(*this);

    cout << "Datos registrados exitosamente." << endl;
}