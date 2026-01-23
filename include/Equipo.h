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

    
    
    void setNombreEquipo(string nombreEquipo);
    void setCantidadJugadores(int cantidadJugadores);

    
    int getId();
    string getNombreEquipo();
    int getCantidadJugadores();

    
    void registrar();
    void mostrar();
};

#endif // EQUIPO_H
