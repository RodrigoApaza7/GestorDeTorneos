#ifndef PARTIDA_H
#define PARTIDA_H

#include <string>
using namespace std;

class Partida 
{
private:
    int id;
    int idTorneo;
    int idEquipo1;
    int idEquipo2;
    string fecha;
    string estado;

public:
    Partida();
    void setIdEquipo1(int idEq1);
    void setIdEquipo2(int idEq2);
    int getIdEquipo1() const;
    int getIdEquipo2() const;
    int getResultadoEquipo1() const;
    int getResultadoEquipo2() const;

    void registrar();
    void mostrar();
};

#endif // PARTIDA_H