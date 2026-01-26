#include "Jugador.h"
#include "Guardar.h"
#include "Consultar.h"
#include <iostream>
#include <string>
using namespace std;

Jugador::Jugador() 
{
    id = 0;
    nombre = "";
    nickname = "";
    edad = 0;
}

int Jugador::getId() const {
    return id;
}

string Jugador::getnickname() const {
    return nickname;
}

void Jugador::registrar() 
{
    cout << "Registro de Jugador" << endl;
    cout << "Ingrese ID: ";
    cin >> id;
    cout << "Ingrese Nombre: ";
    cin >> nombre;
    cout << "Ingrese Nickname: ";
    cin >> nickname;
    cout << "Ingrese Edad: ";
    cin >> edad;

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