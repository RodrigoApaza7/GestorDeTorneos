#ifndef PARTIDA_H
#define PARTIDA_H

class Partida {
private:
    int id;
    int idEquipo1;
    int idEquipo2;
    int resultadoEquipo1;
    int resultadoEquipo2;

public:
    Partida();
    void registrar();
    void mostrar();
};

#endif // PARTIDA_H