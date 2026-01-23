#ifndef TORNEO_H
#define TORNEO_H

#include <iostream>
#include <string>
using namespace std;

class Torneo {
private:
    int id;
    std::string nombreTorneo;
    std::string juego; // LOL, CS2, Dota, Valorant
    std::string fecha;

public:
    Torneo();
    void setfecha(const std::string& fecha);
    string getfecha();
    void registrar();
    void mostrar();
};

#endif // TORNEO_H