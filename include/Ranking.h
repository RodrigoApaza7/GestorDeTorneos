#ifndef RANKING_H
#define RANKING_H

#include <iostream>
#include <string>

class Ranking 
{
private:
    unsigned long long id;
    unsigned long long idTorneo;
    unsigned long long idEquipo;        
    int posicion;
    int puntos;    
public:
    Ranking(unsigned long long idTorneo, unsigned long long idEquipo, int posicion, int puntos);
    Ranking(unsigned long long id, unsigned long long idTorneo, unsigned long long idEquipo, int posicion, int puntos);
    
    void setidTorneo(unsigned long long idTorneo);
    void setidEquipo(unsigned long long idEquipo);
    void setposicion(int posicion);
    void setpuntos(int puntos);

    unsigned long long getId() const;
    unsigned long long getIdTorneo();
    unsigned long long getIdEquipo();
    int getPosicion();
    int getPuntos();

    void registrar();
    void mostrar();
};

#endif // RANKING_H