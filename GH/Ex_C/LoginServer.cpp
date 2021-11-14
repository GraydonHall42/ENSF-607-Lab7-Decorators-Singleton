/* File Name: LoginServer.cpp
* Lab # and Assignment #: Lab #7
* Lab section: 1
* Completed by: Graydon Hall and Jared Kraus
* Submission Date: 2021-11-22
*/

#include "User.hpp"
#include "LoginServer.hpp"
#include <iostream>
using namespace std;

// define static class variable
LoginServer* LoginServer::instance = nullptr;

LoginServer* LoginServer::getInstance(){

    if(instance==nullptr){
        instance = new LoginServer();
    }
    // note that instance is a pointer to a LoginServer
    return instance;
}

void LoginServer::add(string username, string password){
    // first check user does not already exist
    User u;
    for(int i=0; i < users.size(); i++){
        u = users.at(i);
        if (u.username == username ){
            cout<<"Error: Unable to add " << username << " because a user with that name already exists.\n";
            return;
        }
    }

    // if we get here, then means user with same username not found in database
    User user;
    user.password = password;
    user.username=username;
    users.push_back(user);
    cout<< username << " sucessfully added!\n";
    
}

User* LoginServer::validate(string username, string password){
    // check if a user exists in the database with this username AND password
    User u;
    for(int i=0; i < users.size(); i++){
        u = users.at(i);
        if (u.username == username & u.password == password){
            return &(users.at(i));
        }
    }

    // user was not found
    cout << "User not found\n";
    return NULL;
}

LoginServer::LoginServer(const LoginServer& src){
    if(this !=&src){
        for(int i=0; i < src.users.size(); i++){
            this->users.push_back(src.users.at(i));
            this->instance=src.instance;
        }
    }
}

LoginServer& LoginServer::operator=(LoginServer&rhs){
    if(this !=&rhs){
        for(int i=0; i < rhs.users.size(); i++){
            this->users.push_back(rhs.users.at(i));
            this->instance=rhs.instance;
        }
    }
}
        
