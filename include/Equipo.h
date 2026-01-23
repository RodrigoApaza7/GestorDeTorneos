#ifndef EQUIPO_H
#define EQUIPO_H

#include <string>
using namespace std;

class Equipo {
private:
    int id;
    std::string nombreEquipo;
    int cantidadJugadores;

public:
    void registrar();
    void mostrar();
};

#endif // EQUIPO_H