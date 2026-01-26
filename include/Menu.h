#ifndef MENU_H
#define MENU_H

class Menu {
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
};

#endif // MENU_H