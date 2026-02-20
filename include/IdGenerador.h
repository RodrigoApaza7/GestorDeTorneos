#ifndef ID_GENERADOR_H
#define ID_GENERADOR_H

using namespace std;

enum class TipoObjeto
{   
    juego =10,
    torneo=20,
    partida=30,
    Equipo=40,
    Jugador=50,
    Ranking=60,
    Emparejamiento=70,
    SimularPartida=80,
    DetalleEquipo=90,
};

class IdGenerador
{
private:
    static unsigned int contadores[100]; // Array para almacenar contadores de cada tipo de ID
public:
    static unsigned long long generarId(TipoObjeto tipo);
};    

#endif // ID_GENERADOR_H