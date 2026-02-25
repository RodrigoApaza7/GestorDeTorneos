#include "Torneo.h"
#include "Guardar.h"
#include "Consultar.h"
#include "IdGenerador.h"

#include <iostream>
#include <string>
using namespace std;

Torneo::Torneo(unsigned long long idJuego, const string& nombreTorneo, const string& fecha, const string& estado, const string& tipo) 
{
    id = IdGenerador::generarId(TipoObjeto::Torneo);
    this->idJuego = idJuego;
    this->nombreTorneo = nombreTorneo;
    this->fecha = fecha;
    this->estado = estado;
    this->tipo = tipo;
}

Torneo::Torneo(unsigned long long id, unsigned long long idJuego, const string& nombreTorneo, const string& fecha, const string& estado, const string& tipo) 
{
    this->id = id;
    this->idJuego = idJuego;
    this->nombreTorneo = nombreTorneo;
    this->fecha = fecha;
    this->estado = estado;
    this->tipo = tipo;
}

void Torneo::setfecha(const string& fecha) 
{
    this->fecha = fecha;
}

void Torneo::setnombreTorneo(const string& nombreTorneo) 
{
    this->nombreTorneo = nombreTorneo;
}

void Torneo::setIdJuego(const unsigned long long idJuego) 
{
    this->idJuego = idJuego;
}

unsigned long long Torneo::getId() const 
{
    return id;
}

string Torneo::getNombreTorneo() 
{
    return nombreTorneo;
}

unsigned long long Torneo::getIdJuego() 
{
    return idJuego;
}

string Torneo::getFecha() 
{
    return fecha;
}

string Torneo::getEstado() 
{
    return estado;
}

string Torneo::getTipo() 
{
    return tipo;
}

void Torneo::registrar() 
{
    Guardar g;
    g.GuardarTorneo(*this);
}

void Torneo::mostrar() 
{
    cout << "ID: " << id << endl;
    cout << "ID Juego: " << idJuego << endl;
    cout << "Nombre del Torneo: " << nombreTorneo << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "Estado: " << estado << endl;
    cout << "Tipo: " << tipo << endl;
}