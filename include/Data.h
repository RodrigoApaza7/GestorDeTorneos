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
    char nombre[100];
    char nickname[50];
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
    char fecha[20];
    char estado[20];
};

struct UsuarioData 
{
    unsigned long long id;
    char nombre[100];
    char contrasenia[100];
    char rol[20];
};

struct DetalleEquipoData 
{
    unsigned long long id;
    unsigned long long idEquipo;
    vector<unsigned long long> idJugadores;
    char nombre[100];
};

struct JuegoData 
{
    unsigned long long id;
    char nombre[100];
    char genero[50];
    char plataforma[50];
};

struct TorneoData 
{
    unsigned long long id;
    unsigned long long idJuego;
    char nombre[100];
    char fecha[20];
    char estado[20];
    char tipo[20];
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
    char fecha[20];
    char estado[20];
};

struct SimularPartidaData 
{
    unsigned long long id;
    unsigned long long idPartida;
    int golesEquipo1;
    int golesEquipo2;
};

#endif // DATA_H