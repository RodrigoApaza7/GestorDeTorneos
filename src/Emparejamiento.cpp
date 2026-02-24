#include "Emparejamiento.h"
#include "IdGenerador.h"
#include "Guardar.h"
#include "Consultar.h"

#include <iostream>
#include <vector>
using namespace std;

Emparejamiento::Emparejamiento(unsigned long long idTorneo, unsigned long long idEquipo1, unsigned long long idEquipo2, const string& fecha, const string& estado) 
{
    id = IdGenerador::generarId(TipoObjeto::Emparejamiento);
    this->idTorneo = idTorneo;
    this->idEquipo1 = idEquipo1;
    this->idEquipo2 = idEquipo2;
    this->fecha = fecha;
    this->estado = estado;
}
Emparejamiento::Emparejamiento(unsigned long long id, unsigned long long idTorneo, unsigned long long idEquipo1, unsigned long long idEquipo2, const string& fecha, const string& estado)
{
    this->id = id;
    this->idTorneo = idTorneo;
    this->idEquipo1 = idEquipo1;
    this->idEquipo2 = idEquipo2;
    this->fecha = fecha;
    this->estado = estado;
}

void Emparejamiento::setIdTorneo(unsigned long long idTorneo) 
{
    this->idTorneo = idTorneo;
}

void Emparejamiento::setIdEquipo1(unsigned long long idEquipo1) 
{
    this->idEquipo1 = idEquipo1;
}

void Emparejamiento::setIdEquipo2(unsigned long long idEquipo2) 
{
    this->idEquipo2 = idEquipo2;
}

void Emparejamiento::setFecha(const std::string& fecha) 
{
    this->fecha = fecha;
}

void Emparejamiento::setEstado(const std::string& estado) 
{
    this->estado = estado;
}

unsigned long long Emparejamiento::getId() 
{
    return id;
}

unsigned long long Emparejamiento::getIdTorneo() 
{
    return idTorneo;
}

unsigned long long Emparejamiento::getIdEquipo1() 
{
    return idEquipo1;
}

unsigned long long Emparejamiento::getIdEquipo2() 
{
    return idEquipo2;
}

string Emparejamiento::getFecha() 
{
    return fecha;
}

string Emparejamiento::getEstado() 
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
