#ifndef USER_H
#define USER_H
#include "IUser.h"

class User:public IUser{
    public:
    using IUser::IUser;
    void updateStatus(std::string message)override;
};
#endif