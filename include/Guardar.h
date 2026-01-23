#ifndef GUARDAR_H
#define GUARDAR_H

#include "Jugador.h"
#include "Equipo.h"
#include "Partida.h"

class Guardar {
public:
    void GuardarJugador(Jugador j);
    void GuardarEquipo(Equipo e);
    void GuardarPartida(Partida p);
};

#endif // GUARDAR_H