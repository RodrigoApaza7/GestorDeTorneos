#include "Guardar.h"
#include <stdio.h>

void Guardar::GuardarJugador(Jugador j) {
    FILE* archivo;
    archivo = fopen("jugadores.bin", "ab"); // abrir archivo

    fwrite(&j, sizeof(Jugador), 1, archivo); // guardar objeto

    fclose(archivo); // cerrar archivo
}

void Guardar::GuardarEquipo(Equipo e) {
    FILE* archivo;
    archivo = fopen("equipos.bin", "ab"); // abrir archivo

    fwrite(&e, sizeof(Equipo), 1, archivo); // guardar objeto
    fclose(archivo); // cerrar archivo
}

void Guardar::GuardarPartida(Partida p) {
    FILE* archivo;
    archivo = fopen("partidas.bin", "ab"); // abrir archivo

    fwrite(&p, sizeof(Partida), 1, archivo); // guardar objeto
    fclose(archivo); // cerrar archivo
}

void Guardar::GuardarUsuario(Usuario u) {
    FILE* archivo;
    archivo = fopen("usuarios.bin", "ab"); // abrir archivo

    fwrite(&u, sizeof(Usuario), 1, archivo); // guardar objeto
    fclose(archivo); // cerrar archivo
}

void Guardar::GuardarTorneo(Torneo t) {
    FILE* archivo;
    archivo = fopen("torneos.bin", "ab"); // abrir archivo

    fwrite(&t, sizeof(Torneo), 1, archivo); // guardar objeto
    fclose(archivo); // cerrar archivo
}

void Guardar::GuardarRanking(Ranking r) {
    FILE* archivo;
    archivo = fopen("rankings.bin", "ab"); // abrir archivo

    fwrite(&r, sizeof(Ranking), 1, archivo); // guardar objeto
    fclose(archivo); // cerrar archivo
}

void Guardar::GuardarEmparejamiento(Emparejamiento e) {
    FILE* archivo;
    archivo = fopen("emparejamientos.bin", "ab"); // abrir archivo

    fwrite(&e, sizeof(Emparejamiento), 1, archivo); // guardar objeto
    fclose(archivo); // cerrar archivo
}

void Guardar::GuardarSimularPartida(SimularPartida s) {
    FILE* archivo;
    archivo = fopen("simulaciones.bin", "ab"); // abrir archivo

    fwrite(&s, sizeof(SimularPartida), 1, archivo); // guardar objeto
    fclose(archivo); // cerrar archivo
}