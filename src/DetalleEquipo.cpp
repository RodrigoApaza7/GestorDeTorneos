#include "DetalleEquipo.h"
#include "Guardar.h"

DetalleEquipo::DetalleEquipo() 
{
    id = 0;
    idEquipo = 0;
    idJugador = 0;
    nombre = "";
}

void DetalleEquipo::setidEquipo(int idEquipo) 
{
    this->idEquipo = idEquipo;
}

void DetalleEquipo::setidJugador(int idJugador) 
{
    this->idJugador = idJugador;
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