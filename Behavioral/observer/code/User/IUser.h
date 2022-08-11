#ifndef IUSER_H
#define IUSER_H
#include <iostream>

class IUser{
    private:
        std::string m_username;
        int m_userId ; 
    public:
        IUser();
        IUser(std::string username, int userid);
        ~IUser();

        int getId();
        void setId(int id);
        void setUsername(std::string username);
        std::string getUsername();
        virtual void updateStatus(std::string status)=0;
};
#endif