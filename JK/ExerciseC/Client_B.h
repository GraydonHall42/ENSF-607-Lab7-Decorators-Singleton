#ifndef CLIENT_B
#define CLIENT_B
#include <string>
#include <vector>
#include "LoginServer.h"
using namespace std;

class Client_B
{

private:
    LoginServer *instance;

public:
    void add(string username, string password);
    User *validate(string username, string password);
    Client_B();
};

#endif