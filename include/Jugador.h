#ifndef JUGADOR_H
#define JUGADOR_H

#include <string>
using namespace std;

class Jugador 
{
private:
    int id;
    char nombre[50];
    char nickname[50];
    int edad;

public:
    Jugador();
    void setnickname(const char* nick);
    const char* getnickname() const;
    int getId() const;

    void registrar();
    void mostrar();
};

#endif // JUGADOR_H