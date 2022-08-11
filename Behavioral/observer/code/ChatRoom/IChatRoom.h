#ifndef ICHATROOM_H
#define ICHATROOM_H
#include <iostream>
#include <vector>
#include <memory>
#include "IUser.h"

class IChatRoom{

    public:

        IChatRoom(std::string name);
        ~IChatRoom();

        // setters and getters
        void setChatName(std::string name);
        std::string getChatName();

        //actions
        void addUser(std::shared_ptr<IUser> user);
        void deleteUser(std::shared_ptr<IUser> user);
        void notify(std::string message);
        virtual void broadCast(std::string message) = 0;

    private:
        std::string m_name;
        std::vector<std::shared_ptr<IUser>> m_users;
        
};
#endif