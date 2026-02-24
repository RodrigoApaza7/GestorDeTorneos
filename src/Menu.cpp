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
#include <iostream>
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

void Menu::mostrarMenuTorneo() {

    Torneo t;

    do
    {
        limpiarPanalla();
        linea();
        cout << "        GESTOR DE TORNEOS E-SPORTS       " << endl;
        linea();
        cout << "1. Nuevo torneo" << endl;
        cout << "2. Consultar torneo" << endl;
        cout << "3. Volver al Menu Principal" << endl;
        linea();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if(opcion == 1) 
        {
            t.registrar();
        } 
        else if(opcion == 2) 
        {
            Consultar c;
            unsigned long long id;
            cout << "Ingrese el ID del torneo a consultar: ";
            cin >> id;
            c.ConsultarTorneo(id);
        } 
        else if(opcion == 3) 
        {
            mostrarMenuPrincipal();
        }
        else
        {
            cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 3);

}



void Menu::mostrarMenuUsuario() {

    Usuario user;

    do
    {
        limpiarPanalla();
        linea();
        cout << "           MENU USUARIO          " << endl;
        linea();
        cout << "1. Registrar Usuario" << endl;
        cout << "2. Login Usuario" << endl;
        cout << "3. Volver al Menu Principal" << endl;
        linea();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if(opcion == 1) 
        {
            user.Registrar();
        } 
        else if(opcion == 2) 
        {
            string u, p;
            cout << "Ingrese el nombre de usuario: ";
            cin >> u;
            cout << "Ingrese la contrasena: ";
            cin >> p;
            if(user.login(u, p)) {
                cout << "Login exitoso!" << endl;
            } else {
                cout << "Login fallido. Usuario o contrasena incorrectos." << endl;
            }
        } 
        else if(opcion == 3) 
        {
            mostrarMenuPrincipal();
        }
        else 
        {
            cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 1 && opcion != 2 && opcion != 3);
}

void Menu::mostrarMenuJugador() 
{


    Jugador j;

    do
    {
        limpiarPanalla();
        linea();
        cout << "           MENU JUGADOR          " << endl;
        linea();
        cout << "1. Registrar Jugador" << endl;
        cout << "2. Mostrar Jugador" << endl;
        cout << "3. Volver al Menu Principal" << endl;
        linea();
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if(opcion == 1) 
        {
            j.registrar();
        } 
        else if(opcion == 2) 
        {
            Consultar c;
            unsigned long long id;
            cout << "Ingrese el ID del jugador a consultar: ";
            cin >> id;
            c.ConsultarJugador(id);
        } 
        else if(opcion == 3) 
        {
            mostrarMenuPrincipal();
        }
        else 
        {
            cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 1 && opcion != 2 && opcion != 3);
}

void Menu::mostrarMenuPartida() {

    Partida p;

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
            p.registrar();
            
        } 
        else if(opcion == 2) 
        {
            p.mostrar();
        } 
        else if(opcion == 3) 
        {
            mostrarMenuPrincipal();
        }
        else 
        {
            cout << "Opcion no valida. Intente de nuevo." << endl;
        }

    } while (opcion != 1 && opcion != 2 && opcion != 3);
}