#ifndef JUGADOR_H
#define JUGADOR_H

using namespace std;

class Jugador 
{
private:
    unsigned long long id;
    char nombre[50];
    char nickname[50];
    int edad;

public:
    Jugador();
    void setnickname(const char* nick);
    const char* getnickname() const;
    unsigned long long getId() const;

    void registrar();
    void mostrar();
};

#endif // JUGADOR_H