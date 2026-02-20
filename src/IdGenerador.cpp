#include "IdGenerador.h"
#include <iostream>

unsigned int IdGenerador::contadores[100] = {0};

unsigned long long IdGenerador::generarId(TipoObjeto tipo)
{
    int prefijo = static_cast<int>(tipo);
    unsigned int& contador = contadores[prefijo];
    return static_cast<unsigned long long>(prefijo) * 100000ULL + ++contador;
}