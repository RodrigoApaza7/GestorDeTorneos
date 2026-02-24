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
    unsigned long long idEquipo;
    vector<unsigned long long> idJugadores;
    string nombre;

public:
    DetalleEquipo(unsigned long long idEquipo, const vector<unsigned long long>& idJugadores, const string& nombre);
    DetalleEquipo(unsigned long long id, unsigned long long idEquipo,vector<unsigned long long> idJugadores, const string& nombre);

    void setidEquipo(unsigned long long idEquipo);
    void setidJugadores(const vector<unsigned long long>& idJugadores);
    void setnombre(const std::string& nombre);

    unsigned long long getId() const;
    unsigned long long getidEquipo();
    string getnombre();
    vector<unsigned long long> getidJugadores();

    void registrar();
    void mostrar();
};

#endif // DETALLEEQUIPO_H