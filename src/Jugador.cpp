#include "Jugador.h"
#include "Guardar.h"
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
}

void Jugador::mostrar() 
{
    cout << "Datos del Jugador" << endl;
    cout << "ID: " << id << endl;
    cout << "Nombre: " << nombre << endl;
    cout << "Nickname: " << nickname << endl;
    cout << "Edad: " << edad << endl;
}