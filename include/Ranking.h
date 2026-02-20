#ifndef RANKING_H
#define RANKING_H

#include <iostream>
#include <string>

class Ranking 
{
private:
    unsigned long long id;
    int idTorneo;
    int idEquipo;        
    int posicion;
    int puntos;    
public:
    Ranking();
    void setidTorneo(int idTorneo);
    void setidEquipo(int idEquipo);
    void setposicion(int posicion);
    void setpuntos(int puntos);

    unsigned long long getid();
    int getidTorneo();
    int getidEquipo();
    int getposicion();
    int getpuntos();

    void registrar();
    void mostrar();
};

#endif // RANKING_H