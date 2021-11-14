/* File Name: Client_B.hpp
* Lab # and Assignment #: Lab #7
* Lab section: 1
* Completed by: Graydon Hall and Jared Kraus
* Submission Date: 2021-11-22
*/


#ifndef CLIENTB
#define CLIENTB
#include <string>
#include <vector>
#include "LoginServer.hpp"
using namespace std;

class Client_B{

private:
    LoginServer* instance;
public:
    void add(string username, string password);
    User* validate(string username, string password);   
    Client_B();
};

#endif