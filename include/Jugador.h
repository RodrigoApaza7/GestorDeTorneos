#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
using namespace std;

class Jugador {
private:
    int id;
    std::string nombre;
    std::string nickname;
    int edad;

public:
    Jugador();
    void setnickname(const std::string& nick);
    string getnickname() const;
    int getId() const;

    void registrar();
    void mostrar();
};

#endif // JUGADOR_H