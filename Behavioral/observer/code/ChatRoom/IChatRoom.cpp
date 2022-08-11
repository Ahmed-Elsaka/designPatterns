
#include <iostream>
#include <algorithm>
#include "IChatRoom.h"


IChatRoom::IChatRoom(std::string name):m_name{name}{}
IChatRoom::~IChatRoom(){std::cout << "chatRoom closed \n";}

void IChatRoom::setChatName(std::string name){ m_name = name; }
std::string IChatRoom::getChatName(){return m_name;}

void IChatRoom::addUser(std::shared_ptr<IUser> user){
    if(user){m_users.push_back(user);}
}

void IChatRoom::deleteUser(std::shared_ptr<IUser> user){
    for(auto it = m_users.begin(); it != m_users.end() ; it++){
        if((*it)->getId() == user->getId()){
            m_users.erase(it);
            break;
        }
    }
}

void IChatRoom::notify(std::string message){
    for(auto& user:m_users){
        user->updateStatus(message);
    }
}

