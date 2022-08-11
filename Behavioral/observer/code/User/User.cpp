#include <iostream>
#include "User.h"

void User::updateStatus(std::string message){
    std::cout << getUsername() << " : " << message << std::endl;
}

