#include "Guardar.h"
#include <stdio.h>
#include <string>
#include <vector>
#include <iostream>
using namespace std;


void Guardar::GuardarJugador(Jugador j)
{
    FILE* archivo = fopen("jugadores.bin", "ab");
    if (archivo == NULL)
    {
        cout << "Error al abrir archivo." << endl;
        return;
    }

    JugadorData data;

    data.id = j.getId();

    memset(data.nombre, '\0', sizeof(data.nombre));
    memset(data.nickname, '\0', sizeof(data.nickname));

    strncpy(data.nombre, j.getNombre().c_str(), sizeof(data.nombre) - 1);
    strncpy(data.nickname, j.getNickname().c_str(), sizeof(data.nickname) - 1);

    data.edad = j.getEdad();

    fwrite(&data, sizeof(JugadorData), 1, archivo);
    fclose(archivo);
}

void Guardar::GuardarEquipo(Equipo e) 
{
    FILE* archivo;
    archivo = fopen("equipos.bin", "ab"); // abrir archivo
    EquipoData data;

    data.id = e.getId();
    data.idTorneo = e.getId();

    fwrite(&data, sizeof(EquipoData), 1, archivo);
    fclose(archivo); // cerrar archivo
}

void Guardar::GuardarPartida(Partida p)
{
    FILE* archivo = fopen("partidas.bin", "ab");

    if (archivo == NULL)
    {
        cout << "Error al abrir archivo." << endl;
        return;
    }

    PartidaData data;

    data.id = p.getId();
    data.idEquipo1 = p.getIdEquipo1();
    data.idEquipo2 = p.getIdEquipo2();
    data.idTorneo = p.getIdTorneo();

    memset(data.fecha, '\0', sizeof(data.fecha));
    memset(data.estado, '\0', sizeof(data.estado));

    strncpy(data.fecha, p.getFecha().c_str(), sizeof(data.fecha) - 1);
    strncpy(data.estado, p.getEstado().c_str(), sizeof(data.estado) - 1);

    fwrite(&data, sizeof(PartidaData), 1, archivo);

    fclose(archivo);
}

void Guardar::GuardarUsuario(Usuario u) 
{
    FILE* archivo;
    archivo = fopen("usuarios.bin", "ab"); // abrir archivo
    UsuarioData data;

    data.id = u.getId();

    memset(data.nombre, '\0', sizeof(data.nombre));
    memset(data.contraseña, '\0', sizeof(data.contraseña));
    memset(data.rol, '\0', sizeof(data.rol));

    strncpy(data.nombre, u.getUsername().c_str(), sizeof(data.nombre) - 1);
    strncpy(data.contraseña, u.getPassword().c_str(), sizeof(data.contraseña) - 1);
    strncpy(data.rol, u.getRol().c_str(), sizeof(data.rol) - 1);

    fwrite(&data, sizeof(UsuarioData), 1, archivo);
    fclose(archivo); // cerrar archivo
}

void Guardar::GuardarTorneo(Torneo t) 
{
    FILE* archivo;
    archivo = fopen("torneos.bin", "ab"); // abrir archivo
    TorneoData data;

    data.id = t.getId();
    data.idJuego = t.getIdJuego();

    memset(data.nombre, '\0', sizeof(data.nombre));
    memset(data.fecha, '\0', sizeof(data.fecha));
    memset(data.estado, '\0', sizeof(data.estado));
    memset(data.tipo, '\0', sizeof(data.tipo));

    strncpy(data.nombre, t.getNombreTorneo().c_str(), sizeof(data.nombre) - 1);
    strncpy(data.fecha, t.getFecha().c_str(), sizeof(data.fecha) - 1);
    strncpy(data.estado, t.getEstado().c_str(), sizeof(data.estado) - 1);
    strncpy(data.tipo, t.getTipo().c_str(), sizeof(data.tipo) - 1);

    fwrite(&data, sizeof(TorneoData), 1, archivo); // guardar objeto
    fclose(archivo); // cerrar archivo
}

void Guardar::GuardarRanking(Ranking r) 
{
    FILE* archivo;
    archivo = fopen("rankings.bin", "ab"); // abrir archivo
    RankingData data;

    data.id = r.getId();
    data.idTorneo = r.getIdTorneo();
    data.idEquipo = r.getIdEquipo();
    data.posicion = r.getPosicion();
    data.puntos = r.getPuntos();

    fwrite(&data, sizeof(RankingData), 1, archivo);
    fclose(archivo); // cerrar archivo
}

void Guardar::GuardarSimularPartida(SimularPartida s) 
{
    FILE* archivo;
    archivo = fopen("simulaciones.bin", "ab"); // abrir archivo
    SimularPartidaData data;

    data.id = s.getId();
    data.idPartida = s.getIdPartida();
    data.golesEquipo1 = s.getGolesEquipo1();
    data.golesEquipo2 = s.getGolesEquipo2();

    fwrite(&data, sizeof(SimularPartidaData), 1, archivo);
    fclose(archivo); // cerrar archivo
}

void Guardar::ActualizarPartida(Partida p)
{
    FILE* archivo = fopen("partidas.bin", "rb+");

    if (archivo == NULL)
    {
        cout << "No se pudo abrir el archivo." << endl;
        return;
    }

    PartidaData data;

    while (fread(&data, sizeof(PartidaData), 1, archivo))
    {
        if (data.id == p.getId())
        {
            // Retrocede el puntero una posición
            fseek(archivo, -sizeof(PartidaData), SEEK_CUR);

            // Actualiza datos
            data.id = p.getId();
            data.idEquipo1 = p.getIdEquipo1();
            data.idEquipo2 = p.getIdEquipo2();
            data.idTorneo = p.getIdTorneo();

            memset(data.fecha, '\0', sizeof(data.fecha));
            memset(data.estado, '\0', sizeof(data.estado));
    
            strncpy(data.fecha, p.getFecha().c_str(), sizeof(data.fecha) - 1);
            strncpy(data.estado, p.getEstado().c_str(), sizeof(data.estado) - 1);
    
                // Escribe los datos actualizados

            fwrite(&data, sizeof(PartidaData), 1, archivo);

            fclose(archivo);
            cout << "Partida actualizada correctamente." << endl;
            return;
        }
    }

    fclose(archivo);
    cout << "Partida no encontrada." << endl;
}