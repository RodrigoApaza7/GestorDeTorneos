#include "Equipo.h"
#include "Guardar.h"
#include "Consultar.h"
#include "IdGenerador.h"

#include <iostream>
#include <string>
using namespace std;

Equipo::Equipo(unsigned long long idTorneo) 
{
    id = IdGenerador::generarId(TipoObjeto::Equipo);
    this->idTorneo = idTorneo;
}
Equipo::Equipo(unsigned long long id, unsigned long long idTorneo)
{
    this->id = id;
    this->idTorneo = idTorneo;
}


void Equipo::setidTorneo(unsigned long long idTorneo) 
{
    this->idTorneo = idTorneo;
}

unsigned long long Equipo::getidTorneo() 
{
    return idTorneo;
}

unsigned long long Equipo::getId() 
{
    return id;
}

void Equipo::registrar() 
{
    cout << "Registro de Equipo" << endl;
    cout << "Ingrese ID del equipo: ";
    cin >> id;
    cout << "Ingrese ID del torneo al que pertenece el equipo: ";
    cin >> idTorneo;

    Guardar g;
    g.GuardarEquipo(*this);
}

void Equipo::mostrar() 
{
    cout << "Datos del Equipo" << endl;
    cout << "ID: " << id << endl;
    cout << "ID Torneo: " << idTorneo << endl;   
}