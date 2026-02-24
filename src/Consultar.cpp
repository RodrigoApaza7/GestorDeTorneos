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
            data.idTorneo
        );

        if(e.getId() == id) 
        {
            cout << "Equipo encontrado:" << endl;
            e.mostrar();
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

    PartidaData data;

    while (fread(&data, sizeof(PartidaData), 1, archivo)) 
    {
        Partida p(
            data.id,
            data.idTorneo,
            data.idEquipo1,
            data.idEquipo2,
            data.fecha,
            data.estado
        );

        if(p.getId() == id) 
        {
            cout << "Partida encontrada:" << endl;
            p.mostrar();
            break;
        }
    }

    fclose(archivo);
}

void Consultar::ConsultarUsuario(unsigned long long id) 
{
        FILE* archivo;
    archivo = fopen("usuarios.bin", "rb"); // abrir en modo lectura binaria

    if (archivo == NULL) {
        cout << "No hay usuarios registrados." << endl;
        return;
    }

    UsuarioData data;

    while (fread(&data, sizeof(UsuarioData), 1, archivo)) 
    {
        Usuario u(
            data.id,
            data.nombre,
            data.contraseña,
            data.rol
        );

        if(u.getId() == id) 
        {
            cout << "Usuario encontrado:" << endl;
            u.mostrar();
            break;
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

    DetalleEquipoData data;

    while (fread(&data, sizeof(DetalleEquipoData), 1, archivo)) 
    {
        DetalleEquipo de(
            data.id,
            data.idEquipo,
            data.idJugadores,
            data.nombre
        );

        if(de.getId() == id) 
        {
            cout << "Detalle de equipo encontrado:" << endl;
            de.mostrar();
            break;
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

    JuegoData data;

    while (fread(&data, sizeof(JuegoData), 1, archivo)) 
    {
        Juego j(
            data.id,
            data.nombre,
            data.genero,
            data.plataforma
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

void Consultar::ConsultarTorneo(unsigned long long id) 
{
    FILE* archivo;
    archivo = fopen("torneos.bin", "rb"); // abrir en modo lectura binaria

    if (archivo == NULL) {
        cout << "No hay torneos registrados." << endl;
        return;
    }

    TorneoData data;

    while (fread(&data, sizeof(TorneoData), 1, archivo)) 
    {
        Torneo t(
            data.id,
            data.idJuego,
            data.nombre,
            data.fecha,
            data.estado,
            data.tipo
        );

        if(t.getId() == id) 
        {
            cout << "Torneo encontrado:" << endl;
            t.mostrar();
            break;
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

    RankingData data;

    while (fread(&data, sizeof(RankingData), 1, archivo)) 
    {
        Ranking r(
            data.id,
            data.idTorneo,
            data.idEquipo,
            data.posicion,
            data.puntos
        );

        if(r.getId() == id) 
        {
            cout << "Ranking encontrado:" << endl;
            r.mostrar();
            break;
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

    SimularPartidaData data;

    while (fread(&data, sizeof(SimularPartidaData), 1, archivo)) 
    {
        SimularPartida sp(
            data.id,
            data.idPartida,
            data.golesEquipo1,
            data.golesEquipo2
        );

        if(sp.getId() == id) 
        {
            cout << "Simulación encontrada:" << endl;
            sp.mostrar();
            break;
        }
    }

    fclose(archivo);
}

vector<Equipo> Consultar::ObtenerEquiposPorTorneo(unsigned long long idTorneo)
{
    vector<Equipo> equiposTorneo;

    FILE* archivo = fopen("equipos.bin", "rb");

    if (archivo == NULL)
    {
        return equiposTorneo;
    }

    EquipoData data;

    while (fread(&data, sizeof(EquipoData), 1, archivo))
    {
        if (data.idTorneo == idTorneo)
        {
            Equipo e(
                data.id,
                data.idTorneo
            );

            equiposTorneo.push_back(e);
        }
    }

    fclose(archivo);

    return equiposTorneo;
}