#include "SimularPartida.h"
#include "IdGenerador.h"
#include "Guardar.h"
#include "Consultar.h"

#include <iostream>
using namespace std;

SimularPartida::SimularPartida(int _idPartida, int _golesEquipo1, int _golesEquipo2) 
{
    id = IdGenerador::generarId(TipoObjeto::SimularPartida);
    idPartida = _idPartida;
    golesEquipo1 = _golesEquipo1;
    golesEquipo2 = _golesEquipo2;
}

void SimularPartida::setidPartida(int idPartida) 
{
    this->idPartida = idPartida;
}

void SimularPartida::setgolesEquipo1(int golesEquipo1) 
{
    this->golesEquipo1 = golesEquipo1;
}

void SimularPartida::setgolesEquipo2(int golesEquipo2) 
{
    this->golesEquipo2 = golesEquipo2;
}

unsigned long long SimularPartida::getid() 
{
    return id;
}

int SimularPartida::getidPartida() 
{
    return idPartida;
}

int SimularPartida::getgolesEquipo1() 
{
    return golesEquipo1;
}

int SimularPartida::getgolesEquipo2() 
{
    return golesEquipo2;
}

void SimularPartida::registrar() 
{
    

    Guardar g;
    g.GuardarSimularPartida(*this);
}

void SimularPartida::mostrar() 
{
    cout << "Simulación de Partida" << endl;
    cout << "ID: " << id << endl;
    cout << "ID Partida: " << idPartida << endl;
    cout << "Goles Equipo 1: " << golesEquipo1 << endl;
    cout << "Goles Equipo 2: " << golesEquipo2 << endl;
}