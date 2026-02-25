#ifndef TORNEO_H
#define TORNEO_H

#include <iostream>
#include <string>
using namespace std;

class Torneo 
{
private:
    unsigned long long id;
    unsigned long long idJuego;
    string nombreTorneo;
    string fecha;
    string estado;
    string tipo;

public:
    Torneo(unsigned long long idJuego, const string& nombreTorneo, const string& fecha, const string& estado, const string& tipo);
    Torneo(unsigned long long id, unsigned long long idJuego, const string& nombreTorneo, const string& fecha, const string& estado, const string& tipo);
    
    void setfecha(const string& fecha);
    void setIdJuego(unsigned long long idJuego);
    void setestado(const string& estado);
    void settipo(const string& tipo);
    void setnombreTorneo(const string& nombreTorneo);
    void setjuego(const string& juego);

    unsigned long long getId() const;
    unsigned long long getIdJuego();
    string getNombreTorneo();
    string getJuego();
    string getFecha();
    string getEstado();
    string getTipo();
    
    void registrar();
    void mostrar();
};

#endif // TORNEO_H