#ifndef MENU_H
#define MENU_H

class Menu 
{
private:
    int opcion;
    void linea();
    void limpiarPanalla();
public:
    Menu();
    void mostrarMenuPrincipal();
    void mostrarMenuUsuario();
    void mostrarMenuJugador();
    void mostrarMenuPartida();
    void mostrarMenuEquipo();
    void mostrarMenuTorneo();
    void mostrarMenuRanking();
    void mostrarMenuEmparejamiento();
    void mostrarMenuSimularPartida();
    void mostrarMenuJuego();
    
};

#endif // MENU_H