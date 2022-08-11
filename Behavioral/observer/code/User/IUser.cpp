#include <iostream>
#include "IUser.h"

IUser::IUser(){}
IUser::IUser(std::string name, int id):m_username{name}, m_userId{id}{}
IUser::~IUser(){}

int IUser::getId(){return m_userId;}
void IUser::setId(int id){m_userId = id;}
std::string IUser::getUsername(){return m_username;}
void IUser::setUsername(std::string name){m_username = name;}



