#include "Torneo.h"
#include <iostream>
#include <string>
using namespace std;

Torneo::Torneo() : id(0), nombreTorneo(""), idJuego(0), fecha("") {}

void Torneo::setfecha(const string& fecha) 
{
    this->fecha = fecha;
}

void Torneo::setnombreTorneo(const string& nombreTorneo) 
{
    this->nombreTorneo = nombreTorneo;
}

void Torneo::setidJuego(const int idJuego) 
{
    this->idJuego = idJuego;
}

int Torneo::getid() 
{
    return id;
}

string Torneo::getnombreTorneo() 
{
    return nombreTorneo;
}

int Torneo::getidJuego() 
{
    return idJuego;
}

string Torneo::getfecha() 
{
    return fecha;
}


void Torneo::registrar() 
{
    cout << "Registrando torneo..." << endl;
    cout << "Ingrese el nombre del torneo: ";
    cin >> nombreTorneo;
    cout << "ingrese el id del juego del torneo (LOL, CS2, Dota, Valorant): ";
    cin >> idJuego;
    cout << "Ingrese la fecha del torneo (DD/MM/AAAA): ";
    cin >> fecha;
    cout << "Torneo registrado exitosamente." << endl;
}