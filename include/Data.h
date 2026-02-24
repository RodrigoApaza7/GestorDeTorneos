#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <vector>
#include <string>
using namespace std;

#include "Jugador.h"
#include "Equipo.h"
#include "Partida.h"
#include "Usuario.h"
#include "DetalleEquipo.h"
#include "Juego.h"
#include "Torneo.h"
#include "Ranking.h"
#include "Emparejamiento.h"
#include "SimularPartida.h"

struct JugadorData 
{
    unsigned long long id;
    string nombre;
    string nickname;
    int edad;
};

struct EquipoData 
{
    unsigned long long id;
    unsigned long long idTorneo;
};

struct PartidaData 
{
    unsigned long long id;
    unsigned long long idTorneo;
    unsigned long long idEquipo1;
    unsigned long long idEquipo2;
    string fecha;
    string estado;
};

struct UsuarioData 
{
    unsigned long long id;
    string nombre;
    string contraseña;
    string rol;
};

struct DetalleEquipoData 
{
    unsigned long long id;
    unsigned long long idEquipo;
    vector<unsigned long long> idJugadores;
    string nombre;
};

struct JuegoData 
{
    unsigned long long id;
    string nombre;
    string genero;
    string plataforma;
};

struct TorneoData 
{
    unsigned long long id;
    string nombre;
    string juego;
    string fecha;
    string estado;
    string tipo;
};

struct RankingData 
{
    unsigned long long id;
    unsigned long long idTorneo;
    unsigned long long idEquipo;        
    int posicion;
    int puntos;    
};

struct EmparejamientoData 
{
    unsigned long long id;
    unsigned long long idTorneo;
    unsigned long long idEquipo1;
    unsigned long long idEquipo2;
    string fecha;
    string estado;
};

struct SimularPartidaData 
{
    unsigned long long id;
    unsigned long long idPartida;
    int golesEquipo1;
    int golesEquipo2;
};

#endif // DATA_H