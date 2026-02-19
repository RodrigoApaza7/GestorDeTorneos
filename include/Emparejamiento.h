#ifndef EMPAREJAMIENTO_H
#define EMPAREJAMIENTO_H

#include <iostream>
#include <string>
using namespace std;

class Emparejamiento 
{
private:
    int id;
    int idTorneo;
    int idEquipo1;
    int idEquipo2;
    string fecha;
    string estado;

public:
    Emparejamiento();
    
    void setid(int id);
    void setidTorneo(int idTorneo);
    void setidEquipo1(int idEquipo1);
    void setidEquipo2(int idEquipo2);
    void setfecha(const std::string& fecha);
    void setestado(const std::string& estado);

    int getid();
    int getidTorneo();
    int getidEquipo1();
    int getidEquipo2();
    string getfecha();
    string getestado();

};

#endif // EMPAREJAMIENTO_H