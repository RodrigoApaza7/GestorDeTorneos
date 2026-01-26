#ifndef GUARDAR_H
#define GUARDAR_H

#include "Jugador.h"
#include "Equipo.h"
#include "Partida.h"
#include "Usuario.h"

class Guardar {
public:
    void GuardarJugador(Jugador j);
    void GuardarEquipo(Equipo e);
    void GuardarPartida(Partida p);
    void GuardarUsuario(Usuario u);
};

#endif // GUARDAR_H