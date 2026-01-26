#include "Menu.h"
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

void Menu::mostrarMenuPrincipal() {
    limpiarPanalla();
    linea();
    cout << "        GESTOR DE TORNEOS E-SPORTS       " << endl;
    linea();
    cout << "1. Menu Usuario" << endl;
    cout << "2. Menu Jugador" << endl;
    cout << "3. Menu Partida" << endl;
    cout << "4. Salir" << endl;
    linea();
    cout << "Seleccione una opcion: ";
    cin >> opcion;

do
{
    if (opcion < 1 || opcion > 4) 
    {
        cout << "Opcion no valida. Intente de nuevo.\n";
        continue; // vuelve al inicio del do-while
    }

    if(opcion == 1) 
    {
        mostrarMenuUsuario();
    } 
    else if(opcion == 2) 
    {
        mostrarMenuJugador();
    } 
    else if(opcion == 3) 
    {
        mostrarMenuPartida();
    }
    else if(opcion == 4) 
    {
        cout << "Saliendo del programa..." << endl;
        break; // salir del bucle
    }
    
} while (opcion == 1 && opcion == 2 && opcion == 3 && opcion == 4);

}

void Menu::mostrarMenuUsuario() {
    limpiarPanalla();
    linea();
    cout << "           MENU USUARIO          " << endl;
    linea();
    cout << "1. Registrar Usuario" << endl;
    cout << "2. Login Usuario" << endl;
    cout << "3. Volver al Menu Principal" << endl;
    linea();
    cout << "Seleccione una opcion: ";
}

void Menu::mostrarMenuJugador() {
    limpiarPanalla();
    linea();
    cout << "           MENU JUGADOR          " << endl;
    linea();
    cout << "1. Registrar Jugador" << endl;
    cout << "2. Mostrar Jugador" << endl;
    cout << "3. Volver al Menu Principal" << endl;
    linea();
    cout << "Seleccione una opcion: ";
}

void Menu::mostrarMenuPartida() {
    limpiarPanalla();
    linea();
    cout << "           MENU PARTIDA          " << endl;
    linea();
    cout << "1. Registrar Partida" << endl;
    cout << "2. Mostrar Partida" << endl;
    cout << "3. Volver al Menu Principal" << endl;
    linea();
    cout << "Seleccione una opcion: ";
}