#ifndef USUARIO_H
#define USUARIO_H
#include <string>
using namespace std;

class Usuario 
{
private:
    unsigned long long id;
    string username;
    string password;
    string rol;

public:
    Usuario();
    
    void setUsername(const string& u);
    void setPassword(const string& p);
    void setRol(const string& r);

    unsigned long long getId() const;
    string getUsername() const;
    string getPassword() const;
    string getRol() const;

    void Registrar();
    void mostrar();

    bool login(string u, string p);
};

#endif // USUARIO_H