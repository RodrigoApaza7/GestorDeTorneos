#ifndef DETALLEEQUIPO_H
#define DETALLEEQUIPO_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class DetalleEquipo 
{
private:
    int id;
    int idEquipo;
    vector<int> idJugadores;
    string nombre;

public:
    DetalleEquipo();
    
    void setidEquipo(int idEquipo);
    void setidJugadores(const vector<int>& idJugadores);
    void setnombre(const std::string& nombre);

    int getid();
    int getidEquipo();
    string getnombre();
    vector<int> getidJugadores();
};

#endif // DETALLEEQUIPO_H