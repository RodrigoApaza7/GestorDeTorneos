#include "include/CitaMedica.h"
#include <iostream>
#include <string>
using namespace std;

CitaMedica::CitaMedica() 
{
    id = 0;
    idPaciente = 0;
    idDoctor = 0;
    fecha = "";
    hora = "";
}

void CitaMedica::SetIdPaciente(int idPaciente) 
{
    this->idPaciente = idPaciente;
}

void CitaMedica::SetIdDoctor(int idDoctor) 
{
    this->idDoctor = idDoctor;
}

void CitaMedica::registrar() 
{
    cout << "Registro de Cita Medica" << endl;
    cout << "Ingrese ID de la Cita: ";
    cin >> id;
    cout << "Ingrese ID del Paciente: ";
    cin >> idPaciente;
    cout << "Ingrese ID del Doctor: ";
    cin >> idDoctor;
    cout << "Ingrese Fecha (DD/MM/AAAA): ";
    cin >> fecha;
    cout << "Ingrese Hora (HH:MM): ";
    cin >> hora;
}

void CitaMedica::mostrar() 
{
    cout << "Datos de la Cita Medica" << endl;
    cout << "ID de la Cita: " << id << endl;
    cout << "ID del Paciente: " << idPaciente << endl;
    cout << "ID del Doctor: " << idDoctor << endl;
    cout << "Fecha: " << fecha << endl;
    cout << "Hora: " << hora << endl;
}