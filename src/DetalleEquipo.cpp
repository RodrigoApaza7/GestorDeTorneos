#include "DetalleEquipo.h"
#include "IdGenerador.h"
#include "Guardar.h"
#include "Consultar.h"
#include <iostream>
using namespace std;

DetalleEquipo::DetalleEquipo(unsigned long long idEquipo, const vector<unsigned long long>& idJugadores, const string& nombre) 
{
    id = IdGenerador::generarId(TipoObjeto::DetalleEquipo);
    this->idEquipo = idEquipo;
    this->idJugadores = idJugadores;
    this->nombre = nombre;
}

DetalleEquipo::DetalleEquipo(unsigned long long id, unsigned long long idEquipo,vector<unsigned long long> idJugadores, const string& nombre)
{
    this->id = id;
    this->idEquipo = idEquipo;
    this->idJugadores = idJugadores;
    this->nombre = nombre;
}

void DetalleEquipo::setidEquipo(unsigned long long idEquipo) 
{
    this->idEquipo = idEquipo;
}

void DetalleEquipo::setidJugadores(const vector<unsigned long long>& idJugadores) 
{
    this->idJugadores = idJugadores;
}

void DetalleEquipo::setnombre(const std::string& nombre) 
{
    this->nombre = nombre;
}

unsigned long long DetalleEquipo::getId() const 
{
    return id;
}

unsigned long long DetalleEquipo::getidEquipo() 
{
    return idEquipo;
}

string DetalleEquipo::getnombre() 
{
    return nombre;
}

vector<unsigned long long> DetalleEquipo::getidJugadores() 
{
    return idJugadores;
}

void DetalleEquipo::registrar() 
{
    cout << "Registro de Detalle de Equipo" << endl;
    cout << "Ingrese ID del equipo: ";
    cin >> idEquipo;
    cout << "Ingrese Nombre del equipo: ";
    cin.ignore();
    getline(cin, nombre);

    int numJugadores;
    cout << "Ingrese el número de jugadores en el equipo: ";
    cin >> numJugadores;

    idJugadores.clear();
    for (int i = 0; i < numJugadores; i++) 
    {
        int idJugador;
        cout << "Ingrese ID del jugador " << (i + 1) << ": ";
        cin >> idJugador;
        idJugadores.push_back(idJugador);
    }

    Guardar g;
    g.GuardarDetalleEquipo(*this);

    cout << "Datos registrados exitosamente." << endl;
}

void DetalleEquipo::mostrar() 
{
    cout << "Detalle del Equipo" << endl;
    cout << "ID: " << id << endl;
    cout << "ID del Equipo: " << idEquipo << endl;
    cout << "Nombre del Equipo: " << nombre << endl;
    cout << "IDs de Jugadores: ";
    for (int idJugador : idJugadores) {
        cout << idJugador << " ";
    }
    cout << endl;
}