#include "Emparejamiento.h"
#include "IdGenerador.h"
#include "Guardar.h"
#include "Consultar.h"

#include <iostream>
#include <vector>
using namespace std;

void Emparejamiento::GenerarEmparejamiento(unsigned long long idTorneo)
{
    Consultar c;
    vector<Equipo> equipos = c.ObtenerEquiposPorTorneo(idTorneo);

    if (equipos.size() < 2)
    {
        cout << "No hay suficientes equipos para generar emparejamiento." << endl;
        return;
    }

    if (equipos.size() % 2 != 0)
    {
        cout << "Cantidad impar de equipos. No se puede generar emparejamiento." << endl;
        return;
    }

    cout << "Generando emparejamientos..." << endl;

    string fecha = "2026-01-01";      // puedes cambiarlo luego
    string estado = "Pendiente";

    for (size_t i = 0; i < equipos.size(); i += 2)
    {
        Partida p(
            idTorneo,
            equipos[i].getId(),
            equipos[i + 1].getId(),
            fecha,
            estado
        );

        p.registrar();

        cout << "Partida creada: "
             << equipos[i].getId() << " vs "
             << equipos[i + 1].getId() << endl;
    }

    cout << "Emparejamiento generado correctamente." << endl;
}