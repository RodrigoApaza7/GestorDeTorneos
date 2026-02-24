#ifndef JUEGO_H
#define JUEGO_H

#include <string>
#include <vector>
using namespace std;

class Juego 
{
private:
    unsigned long long id;
    string nombre;
    string genero;
    string plataforma;
public:
    Juego(const string& nombre, const string& genero, const string& plataforma);
    Juego(unsigned long long id, const string& nombre, const string& genero, const string& plataforma);
    
    void setnombre(const string& nombre);
    void setgenero(const string& genero);
    void setplataforma(const string& plataforma);

    unsigned long long getId() const;
    string getnombre() const;
    string getgenero() const;
    string getplataforma() const;

    void registrar();
    void mostrar();
};

#endif