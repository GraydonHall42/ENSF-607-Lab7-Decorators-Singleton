/* File Name: Client_B.cpp
* Lab # and Assignment #: Lab #7
* Lab section: 1
* Completed by: Graydon Hall and Jared Kraus
* Submission Date: 2021-11-22
*/


#include <string>
#include <vector>
#include "LoginServer.hpp"
#include "Client_B.hpp"
using namespace std;


Client_B::Client_B(){
    instance = LoginServer::getInstance();
}

void Client_B::add(string username, string password){
    instance->add(username, password);
}

User* Client_B::validate(string username, string password){
    return instance->validate(username, password);
}