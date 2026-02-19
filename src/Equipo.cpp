#include "Equipo.h"
#include "Guardar.h"

#include <iostream>
#include <string>
using namespace std;

Equipo::Equipo() 
{
    id = 0;
    idTorneo = 0;
}


void Equipo::setidTorneo(int idTorneo) 
{
    this->idTorneo = idTorneo;
}

int Equipo::getidTorneo() 
{
    return idTorneo;
}

int Equipo::getId() 
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