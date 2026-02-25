#include "Jugador.h"
#include "Guardar.h"
#include "Consultar.h"
#include "IdGenerador.h"
#include <iostream>
#include <string>
using namespace std;

Jugador::Jugador(string nombre, string nickname, int edad) 
{
    id = IdGenerador::generarId(TipoObjeto::Jugador);
    this->nombre = nombre;
    this->nickname = nickname;
    this->edad = edad;
}

Jugador::Jugador(unsigned long long id, string nombre, string nickname, int edad) 
{
    this->id = id;
    this->nombre = nombre;
    this->nickname = nickname;
    this->edad = edad;
}

unsigned long long Jugador::getId() const {
    return id;
}

const string& Jugador::getNickname() const {
    return nickname;
}

const string& Jugador::getNombre() const {
    return nombre;
}

int Jugador::getEdad() const {
    return edad;
}

void Jugador::registrar() 
{
    Guardar g;
    g.GuardarJugador(*this);

    cout << "Datos registrados exitosamente." << endl;
}

void Jugador::mostrar() 
{
    cout << "Datos del Jugador" << endl;
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Nickname: " << nickname << endl;
    cout << "Edad: " << edad << endl;
}