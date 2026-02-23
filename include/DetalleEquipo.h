#ifndef DETALLEEQUIPO_H
#define DETALLEEQUIPO_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class DetalleEquipo 
{
private:
    unsigned long long id;
    int idEquipo;
    vector<int> idJugadores;
    string nombre;

public:
    DetalleEquipo();
    
    void setidEquipo(int idEquipo);
    void setidJugadores(const vector<int>& idJugadores);
    void setnombre(const std::string& nombre);

    unsigned long long getId() const;
    int getidEquipo();
    string getnombre();
    vector<int> getidJugadores();

    void registrar();
    void mostrar();
};

#endif // DETALLEEQUIPO_H