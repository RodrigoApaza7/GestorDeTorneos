#ifndef EQUIPO_H
#define EQUIPO_H

#include <string>
using namespace std;

class Equipo 
{
private:
    unsigned long long id;
    unsigned long long idTorneo;

public:
    
    Equipo(unsigned long long idTorneo);
    Equipo(unsigned long long id, unsigned long long idTorneo);


    void setidTorneo(unsigned long long idTorneo);

    unsigned long long getId();
    unsigned long long getidTorneo();
    
    void registrar();
    void mostrar();
};

#endif // EQUIPO_H
