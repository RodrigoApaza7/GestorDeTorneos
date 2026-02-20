#ifndef EMPAREJAMIENTO_H
#define EMPAREJAMIENTO_H

#include <iostream>
#include <string>
using namespace std;

class Emparejamiento 
{
private:
    unsigned long long id;
    int idTorneo;
    int idEquipo1;
    int idEquipo2;
    string fecha;
    string estado;

public:
    Emparejamiento();
    
    void setidTorneo(int idTorneo);
    void setidEquipo1(int idEquipo1);
    void setidEquipo2(int idEquipo2);
    void setfecha(const std::string& fecha);
    void setestado(const std::string& estado);

    unsigned long long getid();
    int getidTorneo();
    int getidEquipo1();
    int getidEquipo2();
    string getfecha();
    string getestado();

    void registrar();
    void mostrar();
};

#endif // EMPAREJAMIENTO_H