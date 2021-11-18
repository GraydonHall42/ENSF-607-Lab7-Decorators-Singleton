#ifndef CLIENT_A
#define CLIENT_A
#include <string>
#include <vector>
#include "LoginServer.h"
using namespace std;

class Client_A
{

private:
    LoginServer *instance;

public:
    void add(string username, string password);
    User *validate(string username, string password);
    Client_A();
};

#endif