/* File Name: LoginServer.hpp
* Lab # and Assignment #: Lab #7
* Lab section: 1
* Completed by: Graydon Hall and Jared Kraus
* Submission Date: 2021-11-22
*/

#ifndef LOGINSERVER
#define LOGINSERVER
#include <string>
#include <vector>
#include "User.hpp"
using namespace std;

class LoginServer{
protected:
    static LoginServer* instance;
    vector<User> users;
private:
    LoginServer(){}
    LoginServer(const LoginServer& src);
    LoginServer& operator=(LoginServer&rhs);
public:
    static LoginServer* getInstance();
    void add(string username, string password);
    User* validate(string username, string password);   
};

#endif