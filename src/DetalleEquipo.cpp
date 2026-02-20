#include "DetalleEquipo.h"
#include "IdGenerador.h"
#include "Guardar.h"
#include "Consultar.h"
#include <iostream>
using namespace std;

DetalleEquipo::DetalleEquipo() 
{
    id = IdGenerador::generarId(TipoObjeto::DetalleEquipo);
    idEquipo = 0;
    idJugadores.clear();
    nombre = "";
}

void DetalleEquipo::setidEquipo(int idEquipo) 
{
    this->idEquipo = idEquipo;
}

void DetalleEquipo::setidJugadores(const vector<int>& idJugadores) 
{
    this->idJugadores = idJugadores;
}

void DetalleEquipo::setnombre(const std::string& nombre) 
{
    this->nombre = nombre;
}

unsigned long long DetalleEquipo::getid() 
{
    return id;
}

int DetalleEquipo::getidEquipo() 
{
    return idEquipo;
}

string DetalleEquipo::getnombre() 
{
    return nombre;
}

vector<int> DetalleEquipo::getidJugadores() 
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