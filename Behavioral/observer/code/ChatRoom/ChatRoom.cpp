#include "ChatRoom.h"

void ChatRoom::broadCast(std::string message){
    notify(message);
}