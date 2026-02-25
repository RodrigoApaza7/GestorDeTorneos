#ifndef SIMULARPARTIDA_H
#define SIMULARPARTIDA_H

class SimularPartida 
{
private:
    unsigned long long id;
    unsigned long long idPartida;
    int golesEquipo1;
    int golesEquipo2;
public:
    SimularPartida(unsigned long long idPartida, int golesEquipo1, int golesEquipo2);
    SimularPartida(unsigned long long id, unsigned long long idPartida, int golesEquipo1, int golesEquipo2);
    void setIdPartida(unsigned long long idPartida);
    void setGolesEquipo1(int golesEquipo1);
    void setGolesEquipo2(int golesEquipo2);

    unsigned long long getId() const;
    unsigned long long getIdPartida();
    int getGolesEquipo1();
    int getGolesEquipo2();

    void mostrar();
};

#endif // SIMULARPARTIDA_H