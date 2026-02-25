#include "SimularPartida.h"
#include "IdGenerador.h"
#include "Guardar.h"
#include "Consultar.h"

#include <iostream>
using namespace std;

SimularPartida::SimularPartida(unsigned long long idPartida, int golesEquipo1, int golesEquipo2) 
{
    id = IdGenerador::generarId(TipoObjeto::SimularPartida);
    this->idPartida = idPartida;
    this->golesEquipo1 = golesEquipo1;
    this->golesEquipo2 = golesEquipo2;
}

SimularPartida::SimularPartida(unsigned long long id, unsigned long long idPartida, int golesEquipo1, int golesEquipo2)
{
    this->id = id;
    this->idPartida = idPartida;
    this->golesEquipo1 = golesEquipo1;
    this->golesEquipo2 = golesEquipo2;
}

void SimularPartida::setIdPartida(unsigned long long idPartida) 
{
    this->idPartida = idPartida;
}

void SimularPartida::setGolesEquipo1(int golesEquipo1) 
{
    this->golesEquipo1 = golesEquipo1;
}

void SimularPartida::setGolesEquipo2(int golesEquipo2) 
{
    this->golesEquipo2 = golesEquipo2;
}

unsigned long long SimularPartida::getId() const 
{
    return id;
}

unsigned long long SimularPartida::getIdPartida() 
{
    return idPartida;
}

int SimularPartida::getGolesEquipo1() 
{
    return golesEquipo1;
}

int SimularPartida::getGolesEquipo2() 
{
    return golesEquipo2;
}

void SimularPartida::mostrar() 
{
    cout << "Simulación de Partida" << endl;
    cout << "ID: " << id << endl;
    cout << "ID Partida: " << idPartida << endl;
    cout << "Goles Equipo 1: " << golesEquipo1 << endl;
    cout << "Goles Equipo 2: " << golesEquipo2 << endl;
}