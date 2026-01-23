#ifndef USUARIO_H
#define USUARIO_H
#include <string>

class Usuario {
private:
    std::string username;
    std::string password;
    std::string rol;

public:
    bool login(std::string u, std::string p);
};

#endif // USUARIO_H