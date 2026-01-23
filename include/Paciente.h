#ifndef PACIENTE_H
#define PACIENTE_H

#include <string>
using namespace std;

class Paciente {
private:
    int id;
    string nombre;
    string dni;
    int edad;
    string direccion;
    string telefono;

public:
    Paciente();
    void setdireccion(string direccion);
    void settelefono(string telefono);
    void registrar();
    void mostrar();
};

#endif // PACIENTE_H