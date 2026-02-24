#include "Guardar.h"
#include <stdio.h>

void Guardar::GuardarJugador(Jugador j) 
{
    FILE* archivo;
    archivo = fopen("jugadores.bin", "ab"); // abrir archivo
    JugadorData data;

    data.id = j.getId();
    data.nombre = j.getnombre();
    data.nickname = j.getnickname();
    data.edad = j.getedad();

    fwrite(&data, sizeof(JugadorData), 1, archivo);
    fclose(archivo); // cerrar archivo
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
    FILE* archivo;
    archivo = fopen("partidas.bin", "ab"); // abrir archivo
    PartidaData data;

    data.id = p.getId();
    data.idEquipo1 = p.getIdEquipo1();
    data.idEquipo2 = p.getIdEquipo2();
    data.idTorneo = p.getIdTorneo();

    fwrite(&data, sizeof(PartidaData), 1, archivo);
    fclose(archivo); // cerrar archivo
}

void Guardar::GuardarUsuario(Usuario u) 
{
    FILE* archivo;
    archivo = fopen("usuarios.bin", "ab"); // abrir archivo
    UsuarioData data;

    data.id = u.getId();
    data.nombre = u.getUsername();
    data.contraseña = u.getPassword();
    data.rol = u.getRol();

    fwrite(&data, sizeof(UsuarioData), 1, archivo);
    fclose(archivo); // cerrar archivo
}

void Guardar::GuardarTorneo(Torneo t) 
{
    FILE* archivo;
    archivo = fopen("torneos.bin", "ab"); // abrir archivo
    TorneoData data;

    data.id = t.getId();
    data.nombre = t.getNombreTorneo();
    data.juego = t.getJuego();
    data.fecha = t.getFecha();
    data.estado = t.getEstado();
    data.tipo = t.getTipo();

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

void Guardar::GuardarEmparejamiento(Emparejamiento e) 
{
    FILE* archivo;
    archivo = fopen("emparejamientos.bin", "ab"); // abrir archivo
    EmparejamientoData data;

    data.id = e.getId();
    data.idTorneo = e.getIdTorneo();
    data.idEquipo1 = e.getIdEquipo1();
    data.idEquipo2 = e.getIdEquipo2();
    data.fecha = e.getFecha();
    data.estado = e.getEstado();

    fwrite(&data, sizeof(EmparejamientoData), 1, archivo);
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