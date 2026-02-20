#include "Jugador.h"
#include "Guardar.h"
#include "Consultar.h"
#include "IdGenerador.h"
#include <iostream>
#include <string>
using namespace std;

Jugador::Jugador() 
{
    id = IdGenerador::generarId(TipoObjeto::Jugador);
    nombre[0] = '\0';
    nickname[0] = '\0';
    edad = 0;
}

unsigned long long Jugador::getID() const {
    return id;
}

const char* Jugador::getnickname() const {
    return nickname;
}

void Jugador::registrar() 
{
    cout << "Registro de Jugador" << endl;
    cout << "Ingrese ID: ";
    cin >> id;
    cout << "Ingrese Nombre: ";
    cin.ignore();
    cin.getline(nombre, 50);
    cout << "Ingrese Nickname: ";
    cin.getline(nickname, 50);
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