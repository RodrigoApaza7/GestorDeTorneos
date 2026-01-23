#ifndef CITA_MEDICA_H
#define CITA_MEDICA_H

#include <string>
using namespace std;

class CitaMedica {
private:
    int id;
    int idPaciente;
    int idDoctor;
    string fecha;
    string hora;

public:
    CitaMedica();
    void registrar();
    void mostrar();
};

#endif // CITA_MEDICA_H