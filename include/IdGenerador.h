#ifndef ID_GENERADOR_H
#define ID_GENERADOR_H

using namespace std;

enum class TipoObjeto
{   
    Jugador =10,
    Torneo=20,
    Partida=30,
    Equipo=40,
    Ranking=50,
    Emparejamiento=60,
    SimularPartida=70,
    DetalleEquipo=80
};

class IdGenerador
{
private:
    static unsigned int contadores[100]; // Array para almacenar contadores de cada tipo de ID
public:
    static unsigned long long generarId(TipoObjeto tipo);
};    

#endif // ID_GENERADOR_H