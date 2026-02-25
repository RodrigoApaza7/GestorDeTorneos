#ifndef CONSULTAR_H
#define CONSULTAR_H
#include "Jugador.h"
#include "Equipo.h"
#include "Partida.h"
#include "Usuario.h"
#include "DetalleEquipo.h"
#include "Juego.h"
#include "Torneo.h"
#include "Ranking.h"
#include "SimularPartida.h"
#include "Jugador.h"
#include "Data.h"

#include <vector>
#include <string>
using namespace std;

class Consultar 
{
public:
    void ConsultarJugador(unsigned long long id);
    void ConsultarEquipo(unsigned long long id);
    void ConsultarPartida(unsigned long long id);
    void ConsultarUsuario(unsigned long long id);
    void ConsultarDetalleEquipo(unsigned long long id);
    void ConsultarJuego(unsigned long long id);
    void ConsultarTorneo(unsigned long long id);
    void ConsultarRanking(unsigned long long id);
    void ConsultarSimulacion(unsigned long long id);

    Partida ObtenerPartidaPorId(unsigned long long idPartida);

    vector<Equipo> ObtenerEquiposPorTorneo(unsigned long long idTorneo);
};

#endif // CONSULTAR_H