#include <vector>
#include "LoginServer.h"
#include "User.h"
#include <iostream>
using namespace std;

LoginServer *LoginServer::instance = nullptr;

LoginServer *LoginServer::getInstance()
{
    if (LoginServer::instance == nullptr)
    {
        LoginServer::instance = new LoginServer();
    }

    return instance;
}

void LoginServer::add(string username, string password)
{
    User temp;
    for (int i = 0; i < users.size(); i++)
    {
        temp = users.at(i);
        if (temp.username == username)
        {
            cout << "Error: Unable to add " << username << " because a user with that name already exists.\n";
            return;
        }
    }

    // if we get here, then means user with same username not found in database
    User user;
    user.password = password;
    user.username = username;
    users.push_back(user);
    cout << username << " sucessfully added!\n";
}

User *LoginServer::validate(string username, string password)
{
    // check if a user exists in the database with this username AND password
    User temp;
    for (int i = 0; i < users.size(); i++)
    {
        temp = users.at(i);
        if (temp.username == username & temp.password == password)
        {
            return &(users.at(i));
        }
    }

    // user was not found
    cout << "User not found\n";
    return NULL;
}

LoginServer::LoginServer(const LoginServer &src)
{
    if (this != &src)
    {
        for (int i = 0; i < src.users.size(); i++)
        {
            this->users.push_back(src.users.at(i));
            this->instance = src.instance;
        }
    }
}

LoginServer &LoginServer::operator=(LoginServer &rhs)
{
    if (this != &rhs)
    {
        for (int i = 0; i < rhs.users.size(); i++)
        {
            this->users.push_back(rhs.users.at(i));
            this->instance = rhs.instance;
        }
    }
}