#ifndef EQUIPO_H
#define EQUIPO_H

#include <string>
using namespace std;

class Equipo {
private:
    int id;
    string nombreEquipo;
    int cantidadJugadores;

public:
    Equipo();
    void registrar();
    void mostrar();
};

#endif // EQUIPO_H