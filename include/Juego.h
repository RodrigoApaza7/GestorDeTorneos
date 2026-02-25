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
    
    void setNombre(const string& nombre);
    void setGenero(const string& genero);
    void setPlataforma(const string& plataforma);

    unsigned long long getId() const;
    string getNombre() const;
    string getGenero() const;
    string getPlataforma() const;

    void registrar();
    void mostrar();
};

#endif