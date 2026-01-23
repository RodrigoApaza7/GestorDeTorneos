#ifndef USUARIO_H
#define USUARIO_H
#include <string>
using namespace std;

class Usuario {
private:
    string username;
    string password;
    string rol;

public:
    Usuario();
    void Registrar();
    bool login(string u, string p);
};

#endif // USUARIO_H