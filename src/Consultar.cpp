#include <stdio.h>
#include <iostream>
#include "Consultar.h"

void Consultar::ConsultarJugador(unsigned long long id) 
{
    FILE* archivo;
    archivo = fopen("jugadores.bin", "rb"); // abrir en modo lectura binaria

    if (archivo == NULL) {
        cout << "No hay jugadores registrados." << endl;
        return;
    }

    JugadorData data;

    while (fread(&data, sizeof(JugadorData), 1, archivo)) 
    {
        Jugador j(
            data.id,
            data.nombre,
            data.nickname,
            data.edad
        );

        if(j.getId() == id) 
        {
            cout << "Jugador encontrado:" << endl;
            j.mostrar();
            break;
        }
    }

    fclose(archivo);
}

void Consultar::ConsultarEquipo(unsigned long long id) 
{
    FILE* archivo;
    archivo = fopen("equipos.bin", "rb"); // abrir en modo lectura binaria

    if (archivo == NULL) {
        cout << "No hay equipos registrados." << endl;
        return;
    }

    EquipoData data;

    while (fread(&data, sizeof(EquipoData), 1, archivo)) 
    {
        Equipo e(
            data.id,
            data.nombre,
            data.descripcion,
            data.cantidadJugadores
        );

        if(j.getId() == id) 
        {
            cout << "Jugador encontrado:" << endl;
            j.mostrar();
            break;
        }
    }

    fclose(archivo);
}

void Consultar::ConsultarPartida(unsigned long long id) 
{
    FILE* archivo;
    archivo = fopen("partidas.bin", "rb"); // abrir en modo lectura binaria

    if (archivo == NULL) {
        cout << "No hay partidas registradas." << endl;
        return;
    }

    Partida p;

    while (fread(&p, sizeof(Partida), 1, archivo)) 
    {
        if (p.getId() == id) 
        {
            cout << "Partida encontrada:" << endl;
            p.mostrar();
            fclose(archivo);
            return;
        }
    }

    fclose(archivo);
}

void Consultar::ConsultarUsuario(unsigned long long id) 
{
    FILE* archivo;
    archivo = fopen("usuario.bin", "rb"); // abrir en modo lectura binaria

    if (archivo == NULL) {
        cout << "No hay usuarios registrados." << endl;
        return;
    }

    Usuario u;

    while (fread(&u, sizeof(Usuario), 1, archivo)) 
    {
        if (u.getId() == id)
        {
            cout << "Usuario encontrado:" << endl;
            u.mostrar();
            fclose(archivo);
            return;
        }
    }

    fclose(archivo);
}

void Consultar::ConsultarDetalleEquipo(unsigned long long id) 
{
    FILE* archivo;
    archivo = fopen("detallesEquipos.bin", "rb"); // abrir en modo lectura binaria

    if (archivo == NULL) {
        cout << "No hay detalles de equipos registrados." << endl;
        return;
    }

    DetalleEquipo de;

    while (fread(&de, sizeof(DetalleEquipo), 1, archivo)) 
    {
        if (de.getId() == id)
        {
            cout << "Detalle de equipo encontrado:" << endl;
            de.mostrar();
            fclose(archivo);
            return;
        }
    }

    fclose(archivo);
}

void Consultar::ConsultarJuego(unsigned long long id) 
{
    FILE* archivo;
    archivo = fopen("juegos.bin", "rb"); // abrir en modo lectura binaria

    if (archivo == NULL) {
        cout << "No hay juegos registrados." << endl;
        return;
    }

    Juego j;

    while (fread(&j, sizeof(Juego), 1, archivo)) 
    {
        if (j.getId() == id)
        {
            cout << "Juego encontrado:" << endl;
            j.mostrar();
            fclose(archivo);
            return;
        }
    }

    fclose(archivo);
}

void Consultar::ConsultarTorneo(unsigned long long id) 
{
    FILE* archivo;
    archivo = fopen("torneos.bin", "rb"); // abrir en modo lectura binaria

    if (archivo == NULL) {
        cout << "No hay torneos registrados." << endl;
        return;
    }

    Torneo t;

    while (fread(&t, sizeof(Torneo), 1, archivo)) 
    {
        if (t.getId() == id)
        {
            cout << "Torneo encontrado:" << endl;
            t.mostrar();
            fclose(archivo);
            return;
        }
    }

    fclose(archivo);
}

void Consultar::ConsultarRanking(unsigned long long id) 
{
    FILE* archivo;
    archivo = fopen("rankings.bin", "rb"); // abrir en modo lectura binaria

    if (archivo == NULL) {
        cout << "No hay rankings registrados." << endl;
        return;
    }

    Ranking r;

    while (fread(&r, sizeof(Ranking), 1, archivo)) 
    {
        if (r.getId() == id)
        {
            cout << "Ranking encontrado:" << endl;
            r.mostrar();
            fclose(archivo);
            return;
        }
    }

    fclose(archivo);
}

void Consultar::ConsultarSimulacion(unsigned long long id) 
{
    FILE* archivo;
    archivo = fopen("simulaciones.bin", "rb"); // abrir en modo lectura binaria

    if (archivo == NULL) {
        cout << "No hay simulaciones registradas." << endl;
        return;
    }

    SimularPartida s;

    while (fread(&s, sizeof(SimularPartida), 1, archivo)) 
    {
        if (s.getId() == id)
        {
            cout << "Simulación encontrada:" << endl;
            s.mostrar();
            fclose(archivo);
            return;
        }
    }

    fclose(archivo);
}

vector<Equipo> Consultar::ObtenerEquiposPorTorneo(unsigned long long idTorneo)
{   
    vector<Equipo> equiposTorneo;
    FILE* archivo;
    archivo = fopen("equipos.bin", "rb"); // abrir en modo lectura binaria

    if (archivo == NULL) 
    {
        cout << "No hay equipos registrados." << endl;
        return equiposTorneo;
    }

    Equipo e;

    cout << "Equipos en el torneo con ID " << idTorneo << ":" << endl;

    while (fread(&e, sizeof(Equipo), 1, archivo)) 
    {
        if (e.getidTorneo() == idTorneo)
        {
            equiposTorneo.push_back(e);
        }
    }

    fclose(archivo);

    return equiposTorneo;
}