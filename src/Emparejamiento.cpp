#include "Emparejamiento.h"
#include "IdGenerador.h"
#include "Guardar.h"
#include "Consultar.h"

#include <iostream>
using namespace std;

Emparejamiento::Emparejamiento() 
{
    id = IdGenerador::generarId(TipoObjeto::Emparejamiento);
    idTorneo = 0;
    idEquipo1 = 0;
    idEquipo2 = 0;
    fecha = "";
    estado = "";
}

void Emparejamiento::setidTorneo(int idTorneo) 
{
    this->idTorneo = idTorneo;
}

void Emparejamiento::setidEquipo1(int idEquipo1) 
{
    this->idEquipo1 = idEquipo1;
}

void Emparejamiento::setidEquipo2(int idEquipo2) 
{
    this->idEquipo2 = idEquipo2;
}

void Emparejamiento::setfecha(const std::string& fecha) 
{
    this->fecha = fecha;
}

void Emparejamiento::setestado(const std::string& estado) 
{
    this->estado = estado;
}

unsigned long long Emparejamiento::getid() 
{
    return id;
}

int Emparejamiento::getidTorneo() 
{
    return idTorneo;
}

int Emparejamiento::getidEquipo1() 
{
    return idEquipo1;
}

int Emparejamiento::getidEquipo2() 
{
    return idEquipo2;
}

string Emparejamiento::getfecha() 
{
    return fecha;
}

string Emparejamiento::getestado() 
{
    return estado;
}

void Emparejamiento::registrar() 
{
    cout << "Registro de Emparejamiento" << endl;
    cout << "Ingrese ID del Torneo: ";
    cin >> idTorneo;
    cout << "Ingrese ID del Equipo 1: ";
    cin >> idEquipo1;
    cout << "Ingrese ID del Equipo 2: ";
    cin >> idEquipo2;
    cout << "Ingrese Fecha (YYYY-MM-DD): ";
    cin.ignore();
    getline(cin, fecha);
    cout << "Ingrese Estado: ";
    getline(cin, estado);


    Guardar g;
    g.GuardarEmparejamiento(*this);
    // Aquí podrías agregar código para guardar el emparejamiento en un archivo o base de datos

    cout << "Emparejamiento registrado exitosamente." << endl;
}

void Emparejamiento::mostrar() 
{
    cout << "Datos del Emparejamiento" << endl;
    cout << "ID: " << id << endl;
    cout << "ID del Torneo: " << idTorneo << endl;
    cout << "ID del Equipo 1: " << idEquipo1 << endl;
    cout << "ID del Equipo 2: " << idEquipo2 << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "Estado: " << estado << endl;
}