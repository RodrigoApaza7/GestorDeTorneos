#ifndef SIMULARPARTIDA_H
#define SIMULARPARTIDA_H

class SimularPartida 
{
private:
    int id;
    int idpartida;
    int golesEquipo1;
    int golesEquipo2;
public:
    void simularPartida(int idTorneo, int idEquipo1, int idEquipo2);
};

#endif // SIMULARPARTIDA_H