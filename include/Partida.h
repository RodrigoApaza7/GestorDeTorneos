#ifndef PARTIDA_H
#define PARTIDA_H

#include <string>
using namespace std;

class Partida 
{
private:
    unsigned long long id;
    unsigned long long idTorneo;
    unsigned long long idEquipo1;
    unsigned long long idEquipo2;
    string fecha;
    string estado;

public:
    Partida(unsigned long long idTorneo, unsigned long long idEquipo1, unsigned long long idEquipo2, const string& fecha, const string& estado);
    Partida(unsigned long long id, unsigned long long idTorneo, unsigned long long idEquipo1, unsigned long long idEquipo2, const string& fecha, const string& estado);

    void setIdEquipo1(unsigned long long idEq1);
    void setIdEquipo2(unsigned long long idEq2);
    void setFecha(const string& fecha);
    void setEstado(const string& estado);
    void setIdTorneo(unsigned long long idTorneo);

    unsigned long long getId() const;
    unsigned long long getIdTorneo() const;
    unsigned long long getIdEquipo1() const;
    unsigned long long getIdEquipo2() const;
    string getFecha() const;
    string getEstado() const;
    int getResultadoEquipo1() const;
    int getResultadoEquipo2() const;

    void registrar();
    void mostrar();
};

#endif // PARTIDA_H