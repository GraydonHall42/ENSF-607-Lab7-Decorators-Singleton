#ifndef LOGINSERVER
#define LOGINSERVER
#include <string>
#include <vector>
#include "User.h"
using namespace std;

class LoginServer
{

private:
    static LoginServer *instance;
    vector<User> users;
    LoginServer() {}
    LoginServer(const LoginServer &src);
    LoginServer &operator=(LoginServer &rhs);

public:
    static LoginServer *getInstance();
    void add(string username, string password);
    User *validate(string username, string password);
};

#endif