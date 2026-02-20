#include "IdGenerador.h"
#include <iostream>
#include <fstream>

using namespace std;

//incrementador de id por tipo
unsigned int IdGenerador::contadores[100] = {0};

unsigned long long IdGenerador::generarId(TipoObjeto tipo)
{
    int prefijo = static_cast<int>(tipo);
    unsigned int& contador = contadores[prefijo];
    return static_cast<unsigned long long>(prefijo) * 100000ULL + ++contador;
}

//guardar el id generado en un archivo binario

void IdGenerador::cargarContadores() 
{
    ifstream archivo("contadores.bin", ios::binary);
    if (archivo.is_open()) 
    {
        archivo.read(reinterpret_cast<char*>(contadores), sizeof(contadores));
        archivo.close();
    }
}

void IdGenerador::guardarContadores() 
{
    ofstream archivo("contadores.bin", ios::binary);
    if (archivo.is_open()) 
    {
        archivo.write(reinterpret_cast<const char*>(contadores), sizeof(contadores));
        archivo.close();
    }
}