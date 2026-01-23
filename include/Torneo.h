#ifndef TORNEO_H
#define TORNEO_H

#include <string>
using namespace std;

class Torneo {
private:
    int id;
    std::string nombreTorneo;
    std::string juego; // LOL, CS2, Dota, Valorant
    std::string fecha;

public:
    void registrar();
    void mostrar();
};

#endif // TORNEO_H