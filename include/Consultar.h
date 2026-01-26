#ifndef CONSULTAR_H
#define CONSULTAR_H
#include "Jugador.h"
#include "Equipo.h"
#include "Partida.h"
#include "Usuario.h"
#include <vector>
#include <string>
using namespace std;

class Consultar 
{
private:
    vector<Jugador> jugadores;
    vector<Equipo> equipos;
    vector<Partida> partidas;
    vector<Usuario> usuarios;

public:
    void ConsultarJugador(int id);
    void ConsultarEquipo(int id);
    void ConsultarPartida(int id);
    void ConsultarUsuario(const std::string& username);
};

#endif // CONSULTAR_H