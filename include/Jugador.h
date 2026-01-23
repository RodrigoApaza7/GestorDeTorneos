#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
using namespace std;

class Jugador {
private:
    int id;
    std::string nombre;
    std::string nickname;
    int edad;

public:
    void registrar();
    void mostrar();
};

#endif // PACIENTE_H