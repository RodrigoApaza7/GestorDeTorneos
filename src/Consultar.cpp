#include <stdio.h>
#include <iostream>
#include "Consultar.h"
#include "Jugador.h"

void Consultar::ConsultarJugador(int id) {
    FILE* archivo;
    archivo = fopen("jugadores.bin", "rb"); // abrir en modo lectura binaria

    if (archivo == NULL) {
        cout << "No hay jugadores registrados." << endl;
        return;
    }

    Jugador j;

    while (fread(&j, sizeof(Jugador), 1, archivo)) 
    {
        if (j.getId() == id) 
        {
            cout << "Jugador encontrado:" << endl;
            j.mostrar();
            fclose(archivo);
            return;
        }
    }

    fclose(archivo);
}