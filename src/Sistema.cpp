#include "Sistema.h"
#include "Consultar.h"
#include "Guardar.h"

#include <iostream>
using namespace std;

void Sistema::SimularResultado(unsigned long long idPartida)
{
    Consultar c;
    Guardar g;

    try
    {
        Partida p = c.ObtenerPartidaPorId(idPartida);

        if (p.getEstado() != "Pendiente")
        {
            cout << "La partida ya fue finalizada." << endl;
            return;
        }

        int goles1, goles2;

        cout << "Ingrese goles del equipo 1: ";
        cin >> goles1;

        cout << "Ingrese goles del equipo 2: ";
        cin >> goles2;

        // Crear simulación
        SimularPartida s(idPartida, goles1, goles2);

        // Guardar simulación
        g.GuardarSimularPartida(s);

        // Cambiar estado
        p.setEstado("Finalizado");
        g.ActualizarPartida(p);

        cout << "Partida simulada correctamente." << endl;
    }
    catch (const exception& e)
    {
        cout << e.what() << endl;
    }
}