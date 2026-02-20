#ifndef TORNEO_H
#define TORNEO_H

#include <iostream>
#include <string>
#include <chrono>
using namespace std;

class Torneo 
{
private:
    int id;
    int idJuego;
    string nombreTorneo;
    string fecha;
    string estado;
    string tipo;

public:
    Torneo();
    
    void setfecha(const string& fecha);
    void setidJuego(int idJuego);
    void setestado(const string& estado);
    void settipo(const string& tipo);
    void setnombreTorneo(const string& nombreTorneo);
    void setjuego(const string& juego);

    int getid();
    int getidJuego();
    string getnombreTorneo();
    string getjuego();
    string getfecha();
    string getestado();
    string gettipo();
    
    void registrar();
    void mostrar();
};

#endif // TORNEO_H