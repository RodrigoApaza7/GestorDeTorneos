#include "Juego.h"
#include "Guardar.h"
#include "Consultar.h"
#include "IdGenerador.h"

#include <iostream>
#include <fstream>

using namespace std;

Juego::Juego(const string& nombre, const string& genero, const string& plataforma)  
{
    id = IdGenerador::generarId(TipoObjeto::Juego);
    this->nombre = nombre;
    this->genero = genero;
    this->plataforma = plataforma;
}

Juego::Juego(unsigned long long id, const string& nombre, const string& genero, const string& plataforma) 
{
    this->id = id;
    this->nombre = nombre;
    this->genero = genero;
    this->plataforma = plataforma;
}

void Juego::setnombre(const string& nombre) 
{
    this->nombre = nombre;
}

void Juego::setgenero(const string& genero) 
{
    this->genero = genero;
}

void Juego::setplataforma(const string& plataforma) 
{
    this->plataforma = plataforma;
}

unsigned long long Juego::getId() const {
    return id;
}

string Juego::getnombre() const 
{
    return nombre;
}

string Juego::getgenero() const 
{
    return genero;
}

string Juego::getplataforma() const 
{
    return plataforma;
}

void Juego::registrar() 
{
    Guardar g;
    g.GuardarJuego(*this);

    cout << "Datos registrados exitosamente." << endl;
}

void Juego::mostrar() 
{
    cout << "Datos del Juego" << endl;
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Genero: " << genero << endl;
    cout << "Plataforma: " << plataforma << endl;
}

