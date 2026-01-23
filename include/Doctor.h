#ifndef DOCTOR_H
#define DOCTOR_H

#include <string>
using namespace std;

class Doctor {
private:
    int id;
    string nombre;
    string especialidad;
    string telefono;

public:
    Doctor();
    void SetEspecialidad(string especialidad);
    void SetTelefono(string telefono);
    void registrar();
    void mostrar();
};

#endif // DOCTOR_H