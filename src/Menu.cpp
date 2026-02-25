#include "Menu.h"
#include "Usuario.h"
#include "Jugador.h"
#include "Equipo.h"
#include "DetalleEquipo.h"
#include "Torneo.h"
#include "Ranking.h"
#include "Emparejamiento.h"
#include "SimularPartida.h"
#include "Partida.h"
#include "Juego.h"
#include "consultar.h"
#include "Sistema.h"
#include <iostream>
#include <string>
using namespace std;

Menu::Menu() : opcion(0) {}

void Menu::linea() {
    cout << "----------------------------------------" << endl;
}

void Menu::limpiarPanalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
} 

void Menu::mostrarMenuPrincipal() 
{
    do
    {
        limpiarPanalla();
        linea();
        cout << "        GESTOR DE TORNEOS E-SPORTS       " << endl;
        linea();
        cout << "1. Menu Usuario" << endl;
        cout << "2. Menu Jugador" << endl;
        cout << "3. Menu Equipo" << endl;
        cout << "4. Menu Torneo" << endl;
        cout << "5. Menu Partida" << endl;
        cout << "6. Menu Emparejamiento" << endl;
        cout << "7. Simular Partida" << endl;
        cout << "8. Menu Juego" << endl;
        cout << "9. Salir" << endl;
        linea();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
            case 1:
                mostrarMenuUsuario();
                break;
            case 2:
                mostrarMenuJugador();
                break;
            case 3:
                mostrarMenuEquipo();
                break;
            case 4:
                mostrarMenuTorneo();
                break;
            case 5:
                mostrarMenuPartida();
                break;
            case 6:
                mostrarMenuEmparejamiento();
                break;
            case 7:
                Sistema s;
                unsigned long long idPartida;

                cout << "Ingrese ID de la partida a simular: ";
                cin >> idPartida;

                s.SimularResultado(idPartida);
                break;
            case 8:
                mostrarMenuJuego();
                break;
            case 9:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opcion no valida." << endl;
        }

    } while (opcion != 9);
}

void Menu::mostrarMenuTorneo()
{
    do
    {
        limpiarPanalla();
        linea();
        cout << "        GESTOR DE TORNEOS E-SPORTS       " << endl;
        linea();
        cout << "1. Nuevo torneo" << endl;
        cout << "2. Consultar torneo" << endl;
        cout << "3. Volver" << endl;
        linea();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if(opcion == 1)
        {
            unsigned long long idJuego;
            string nombre, fecha, estado, tipo;

            cout << "Ingrese ID del Juego: ";
            cin >> idJuego;

            cout << "Ingrese Nombre del Torneo: ";
            cin.ignore();
            getline(cin, nombre);

            cout << "Ingrese Fecha Inicio: ";
            getline(cin, fecha);

            cout << "Ingrese Estado: ";
            getline(cin, estado);

            cout << "Ingrese Tipo: ";
            getline(cin, tipo);

            Torneo t(idJuego, nombre, fecha, estado, tipo);
            t.registrar();
            cout << "Torneo registrado con ID: " << t.getId() << endl;
            system("pause");
        }
        else if(opcion == 2)
        {
            Consultar c;
            unsigned long long id;

            cout << "Ingrese ID del torneo: ";
            cin >> id;

            c.ConsultarTorneo(id);
            system("pause");
        }
        else if(opcion == 3)
        {
            break;
        }
        else
        {
            cout << "Opcion no valida." << endl;
        }

    } while(opcion != 3);
}

void Menu::mostrarMenuUsuario()
{
    do
    {
        limpiarPanalla();
        linea();
        cout << "           MENU USUARIO          " << endl;
        linea();
        cout << "1. Registrar Usuario" << endl;
        cout << "2. Login Usuario" << endl;
        cout << "3. Volver" << endl;
        linea();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if(opcion == 1)
        {
            string username, password;

            cout << "Ingrese Usuario: ";
            cin.ignore();
            getline(cin, username);

            cout << "Ingrese Password: ";
            getline(cin, password);

            string rol = "Usuario"; // por defecto

            Usuario u(username, password, rol);
            u.Registrar();
            cout << "Usuario registrado con ID: " << u.getId() << endl;
            system("pause");
        }
        else if(opcion == 2)
        {
            string username, password;

            cout << "Ingrese Usuario: ";
            cin.ignore();
            getline(cin, username);

            cout << "Ingrese Password: ";
            getline(cin, password);

            string rol = "Usuario"; // por defecto

            Usuario u(username, password, rol);
            u.Registrar();
        }
        else if(opcion == 3)
        {
            break;
        }
        else
        {
            cout << "Opcion no valida." << endl;
        }

    } while(opcion != 3);
}

void Menu::mostrarMenuJugador()
{
    do
    {
        limpiarPanalla();
        linea();
        cout << "           MENU JUGADOR          " << endl;
        linea();
        cout << "1. Registrar Jugador" << endl;
        cout << "2. Consultar Jugador" << endl;
        cout << "3. Volver" << endl;
        linea();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if(opcion == 1)
        {
            string nombre, nickname;
            int edad;

            cout << "Ingrese Nombre: ";
            cin.ignore();
            getline(cin, nombre);

            cout << "Ingrese Nickname: ";
            getline(cin, nickname);

            cout << "Ingrese Edad: ";
            cin >> edad;

            Jugador j(nombre, nickname, edad);
            j.registrar();
            cout << "Jugador registrado con ID: " << j.getId() << endl;
            system("pause");
        }
        else if(opcion == 2)
        {
            Consultar c;
            unsigned long long id;

            cout << "Ingrese ID del jugador: ";
            cin >> id;

            c.ConsultarJugador(id);
            system("pause");
        }
        else if(opcion == 3)
        {
            break;
        }
        else
        {
            cout << "Opcion no valida." << endl;
        }

    } while(opcion != 3);
}

void Menu::mostrarMenuPartida()
{
    do
    {
        limpiarPanalla();
        linea();
        cout << "           MENU PARTIDA          " << endl;
        linea();
        cout << "1. Registrar Partida" << endl;
        cout << "2. Mostrar Partida" << endl;
        cout << "3. Volver al Menu Principal" << endl;
        linea();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if(opcion == 1)
        {
            unsigned long long idTorneo, idEq1, idEq2;
            string fecha, estado;

            cout << "Ingrese ID Torneo: ";
            cin >> idTorneo;

            cout << "Ingrese ID Equipo 1: ";
            cin >> idEq1;

            cout << "Ingrese ID Equipo 2: ";
            cin >> idEq2;

            cout << "Ingrese Fecha: ";
            cin.ignore();
            getline(cin, fecha);

            estado = "Pendiente";

            Partida p(idTorneo, idEq1, idEq2, fecha, estado);
            p.registrar();
            cout << "Partida registrada con ID: " << p.getId() << endl;
            system("pause");
        }
        else if(opcion == 2)
        {
            Consultar c;
            unsigned long long id;

            cout << "Ingrese ID de la partida: ";
            cin >> id;

            c.ConsultarPartida(id);
            system("pause");
        }
        else if(opcion == 3)
        {
            break;
        }
        else
        {
            cout << "Opcion no valida." << endl;
        }

    } while (opcion != 3);
}

void Menu::mostrarMenuEquipo()
{
    do
    {
        limpiarPanalla();
        linea();
        cout << "           MENU EQUIPO          " << endl;
        linea();
        cout << "1. Registrar Equipo" << endl;
        cout << "2. Consultar Equipo" << endl;
        cout << "3. Volver al Menu Principal" << endl;
        linea();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if(opcion == 1)
        {
            unsigned long long idTorneo;

            cout << "Ingrese ID del torneo al que pertenece el equipo: ";
            cin >> idTorneo;

            Equipo e(idTorneo);
            e.registrar();
            cout << "Equipo registrado con ID: " << e.getId() << endl;
            system("pause");
        }
        else if(opcion == 2)
        {
            Consultar c;
            unsigned long long id;

            cout << "Ingrese ID del equipo: ";
            cin >> id;

            c.ConsultarEquipo(id);
            system("pause");
        }
        else if(opcion == 3)
        {
            break;
        }
        else
        {
            cout << "Opcion no valida." << endl;
        }

    } while (opcion != 3);
}

void Menu::mostrarMenuEmparejamiento()
{
    do
    {
        limpiarPanalla();
        linea();
        cout << "           MENU EMPAREJAMIENTO          " << endl;
        linea();
        cout << "1. Generar Emparejamiento" << endl;
        cout << "2. Volver al Menu Principal" << endl;
        linea();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if(opcion == 1)
        {
            unsigned long long idTorneo;

            cout << "Ingrese ID del torneo para generar emparejamiento: ";
            cin >> idTorneo;

            Emparejamiento e;
            e.GenerarEmparejamiento(idTorneo);
            cout << "Emparejamiento generado exitosamente." << endl;
            system("pause");
        }
        else if(opcion == 2)
        {
            break;
        }
        else
        {
            cout << "Opcion no valida." << endl;
        }

    } while (opcion != 2);
}

void Menu::mostrarMenuSimularPartida()
{
    do
    {
        limpiarPanalla();
        linea();
        cout << "           MENU SIMULAR PARTIDA          " << endl;
        linea();
        cout << "1. Simular Partida" << endl;
        cout << "2. Volver al Menu Principal" << endl;
        linea();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if(opcion == 1)
        {
            unsigned long long idPartida;

            cout << "Ingrese ID de la partida a simular: ";
            cin >> idPartida;

            Sistema s;
            s.SimularResultado(idPartida);
            cout << "Simulación realizada exitosamente." << endl;
            system("pause");
        }
        else if(opcion == 2)
        {
            break;
        }
        else
        {
            cout << "Opcion no valida." << endl;
        }

    } while (opcion != 2);
}

void Menu::mostrarMenuJuego()
{
    do
    {
        limpiarPanalla();
        linea();
        cout << "           MENU JUEGO          " << endl;
        linea();
        cout << "1. Registrar Juego" << endl;
        cout << "2. Consultar Juego" << endl;
        cout << "3. Volver al Menu Principal" << endl;
        linea();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if(opcion == 1)
        {
            string nombre, genero, plataforma;

            cout << "Ingrese Nombre del Juego: ";
            cin.ignore();
            getline(cin, nombre);

            cout << "Ingrese Genero del Juego: ";
            getline(cin, genero);

            cout << "Ingrese Plataforma del Juego: ";
            getline(cin, plataforma);

            Juego j(nombre, genero, plataforma);
            j.registrar();
            cout << "Juego registrado con ID: " << j.getId() << endl;
            
        }
        else if(opcion == 2)
        {
            Consultar c;
            unsigned long long id;

            cout << "Ingrese ID del juego: ";
            cin >> id;

            c.ConsultarJuego(id);
            system("pause");
        }
        else if(opcion == 3)
        {
            break;
        }
        else
        {
            cout << "Opcion no valida." << endl;
        }

    } while (opcion != 3);
}