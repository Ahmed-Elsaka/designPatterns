#include <iostream>
#include "ChatRoom.h"
#include "User.h"

int main(){
    // creat chatroom
    ChatRoom EgyptChatRoom{"Egypt"};

    //create users 
    std::shared_ptr<User> user1{std::make_shared<User>("ahmed",1)};
    std::shared_ptr<User> user2{std::make_shared<User>("ali",2)};

    // actions 
    EgyptChatRoom.addUser(user1);
    EgyptChatRoom.addUser(user2);
    EgyptChatRoom.addUser(std::make_shared<User>("khaled",3));

    EgyptChatRoom.broadCast("hi all welcome to egypt chat room");
    EgyptChatRoom.deleteUser(user2);
    EgyptChatRoom.broadCast("user ali is delelted");



    return 0 ; 
}