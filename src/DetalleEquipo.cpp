#include "DetalleEquipo.h"
#include "Guardar.h"

DetalleEquipo::DetalleEquipo() 
{
    id = 0;
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

int DetalleEquipo::getid() 
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