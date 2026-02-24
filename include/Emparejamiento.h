#ifndef EMPAREJAMIENTO_H
#define EMPAREJAMIENTO_H

#include <iostream>
#include <string>
using namespace std;

class Emparejamiento 
{
private:
    unsigned long long id;
    unsigned long long idTorneo;
    unsigned long long idEquipo1;
    unsigned long long idEquipo2;
    string fecha;
    string estado;

public:
    Emparejamiento(unsigned long long idTorneo, unsigned long long idEquipo1, unsigned long long idEquipo2, const string& fecha, const string& estado);
    Emparejamiento(unsigned long long id, unsigned long long idTorneo, unsigned long long idEquipo1, unsigned long long idEquipo2, const string& fecha, const string& estado);
    
    void setIdTorneo(unsigned long long idTorneo);
    void setIdEquipo1(unsigned long long idEquipo1);
    void setIdEquipo2(unsigned long long idEquipo2);
    void setFecha(const std::string& fecha);
    void setEstado(const std::string& estado);

    unsigned long long getId();
    unsigned long long getIdTorneo();
    unsigned long long getIdEquipo1();
    unsigned long long getIdEquipo2();
    string getFecha();
    string getEstado();

    void registrar();
    void mostrar();

    void GenerarEmparejamiento(unsigned long long idTorneo);
};

#endif // EMPAREJAMIENTO_H