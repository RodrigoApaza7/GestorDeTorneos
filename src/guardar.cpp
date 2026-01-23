#include "../include/Guardar.h"
#include <stdio.h>

void Guardar::GuardarJugador(Jugador j) {
    FILE* archivo;
    archivo = fopen("jugadores.bin", "a"); // abrir archivo

    fwrite(&j, sizeof(Jugador), 1, archivo); // guardar objeto

    fclose(archivo); // cerrar archivo
}