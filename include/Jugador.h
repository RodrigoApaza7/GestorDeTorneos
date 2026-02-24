#ifndef JUGADOR_H
#define JUGADOR_H

using namespace std;

class Jugador 
{
private:
    unsigned long long id;
    string nombre;
    string nickname;
    int edad;

public:
    Jugador(string nombre, string nickname, int edad);
    Jugador(unsigned long long id, string nombre, string nickname, int edad);

    void setnickname(const string& nick);
    void setnombre(const string& nombre);
    void setedad(int edad);

    
    const string& getNombre() const;
    const string& getNickname() const;
    int getEdad() const;
    unsigned long long getId() const;

    void registrar();
    void mostrar();
};

#endif // JUGADOR_H