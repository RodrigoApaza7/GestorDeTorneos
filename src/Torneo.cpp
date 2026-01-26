#include "Torneo.h"
#include <iostream>
#include <string>
using namespace std;

Torneo::Torneo() : id(0), nombreTorneo(""), juego(""), fecha("") {}

void Torneo::setfecha(const std::string& fecha) {
    this->fecha = fecha;
}

void Torneo::setnombreTorneo(const string& nombreTorneo) {
    this->nombreTorneo = nombreTorneo;
}

void Torneo::setjuego(const string& juego) {
    this->juego = juego;
}

string Torneo::getid() {
    return to_string(id);
}

string Torneo::getnombreTorneo() {
    return nombreTorneo;
}

string Torneo::getjuego() {
    return juego;
}

string Torneo::getfecha() {
    return fecha;
}


void Torneo::registrar() {
    cout << "Registrando torneo..." << endl;
    cout << "Ingrese el nombre del torneo: ";
    cin >> nombreTorneo;
    cout << "ingrese el juego del torneo (LOL, CS2, Dota, Valorant): ";
    cin >> juego;
    cout << "Ingrese la fecha del torneo (DD/MM/AAAA): ";
    cin >> fecha;
    cout << "Torneo registrado exitosamente." << endl;
}