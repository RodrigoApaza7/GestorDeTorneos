#ifndef SIMULARPARTIDA_H
#define SIMULARPARTIDA_H

class SimularPartida 
{
private:
    unsigned long long id;
    int idPartida;
    int golesEquipo1;
    int golesEquipo2;
public:
    SimularPartida();
    SimularPartida(unsigned long long id, int _idPartida, int _golesEquipo1, int _golesEquipo2);
    void setidPartida(int idPartida);
    void setgolesEquipo1(int golesEquipo1);
    void setgolesEquipo2(int golesEquipo2);

    unsigned long long getId() const;
    int getidPartida();
    int getgolesEquipo1();
    int getgolesEquipo2();
    
    void registrar();
    void mostrar();
};

#endif // SIMULARPARTIDA_H