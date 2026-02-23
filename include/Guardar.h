#ifndef GUARDAR_H
#define GUARDAR_H

#include "Jugador.h"
#include "Equipo.h"
#include "Partida.h"
#include "Usuario.h"
#include "Torneo.h"
#include "Ranking.h"
#include "Emparejamiento.h"
#include "SimularPartida.h"
#include "DetalleEquipo.h"
#include "Juego.h"

class Guardar 
{
public:
    void GuardarJugador(Jugador j);
    void GuardarEquipo(Equipo e);
    void GuardarPartida(Partida p);
    void GuardarUsuario(Usuario u);
    void GuardarTorneo(Torneo t);
    void GuardarRanking(Ranking r);
    void GuardarEmparejamiento(Emparejamiento e);
    void GuardarSimularPartida(SimularPartida s);
    void GuardarDetalleEquipo(DetalleEquipo d);
    void GuardarJuego(Juego j);
};

#endif // GUARDAR_H