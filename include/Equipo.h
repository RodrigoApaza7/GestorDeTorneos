#ifndef EQUIPO_H
#define EQUIPO_H

#include <string>
using namespace std;

class Equipo 
{
private:
    int id;
    int idTorneo;

public:
    
    Equipo();
    void setidTorneo(int idTorneo);

    int getId();
    int getidTorneo();
    
    void registrar();
    void mostrar();
};

#endif // EQUIPO_H
