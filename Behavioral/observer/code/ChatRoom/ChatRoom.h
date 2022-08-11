#ifndef CHATROOM_H
#define CHATROOM_H
#include <iostream>
#include "IChatRoom.h"

class ChatRoom : public IChatRoom{
    public:
        using IChatRoom::IChatRoom;
        void broadCast(std::string message)override;

};
#endif