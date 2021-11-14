/* File Name: Client_A.cpp
* Lab # and Assignment #: Lab #7
* Lab section: 1
* Completed by: Graydon Hall and Jared Kraus
* Submission Date: 2021-11-22
*/

#include <string>
#include <vector>
#include "LoginServer.hpp"
#include "Client_A.hpp"
using namespace std;


Client_A::Client_A(){
    instance = LoginServer::getInstance();
}

void Client_A::add(string username, string password){
    instance->add(username, password);
}

User* Client_A::validate(string username, string password){
    return instance->validate(username, password);
}