#include <iostream>
#include "character.h"

Character::Character():m_name{"anonymous"}, m_capabilities{"unknown"},
m_age{28},m_health{100}, m_currrentWeaponIndex{0}{}

Character::Character(std::string name, std::string capabilities, int age, int health):
m_name{name}, m_capabilities{capabilities}, m_age{age}, m_health{health},m_currrentWeaponIndex{0}{ }

Character::~Character(){std::cout << "character deleted\n";};

// getters :
std::string Character::getName(){ return m_name;}
std::string Character::getCapabilities(){return m_capabilities;}
int Character::getAge() { return m_age;}
int Character::getHealth() {return m_health;}

// setters : 
void Character::setName(std::string name){m_name = name;}
void Character::setCapabilities(std::string cap){m_capabilities = cap;}
void Character::setAge(int age){m_age = age;}
void Character::setHealth(int health){m_health = health;}
void Character::setPushBehavior(std::shared_ptr<AttackBehavior> push){
    m_pushBehavior = push;
}
void Character::setKickBehavior(std::shared_ptr<AttackBehavior> kick) {
    m_kickBehavior = kick;
}

// actions : 
void Character::run(){std::cout << "I'm running ........\n";}
void Character::jump(){std::cout << "I'm jumping .......\n";}
void Character::push(){ if(m_pushBehavior){m_pushBehavior->attack();} }
void Character::kick(){ if(m_kickBehavior){m_kickBehavior->attack();} }
void Character::fire(){ if(m_currentWeapon){ m_currentWeapon->fire();} }
void Character::changeWeapon(){
    if(hasMoreThanOneWeapon()){
        m_currrentWeaponIndex = ++m_currrentWeaponIndex%m_weapons.size();
        m_currentWeapon = m_weapons[m_currrentWeaponIndex];
        std::cout << "Weapon changed.....";
    }
    m_currentWeapon->print();
}
void Character::getWeaponOut(){
    if(hasWeapon()){
        m_currentWeapon = m_weapons[m_currrentWeaponIndex];
        std::cout << "Weapon Get out : ";
        m_currentWeapon->print();
    }
}
void Character::pushWeaponIn(){m_currentWeapon = nullptr;}
void Character::addWeapon(std::shared_ptr<Weapon> wep){
   if(wep){ m_weapons.push_back(wep);}
}
bool Character::hasMoreThanOneWeapon(){return m_weapons.size() >1;}
bool Character::hasWeapon(){return m_weapons.size() > 0;}
void Character::print(){
    std::cout << m_name << " " << m_capabilities << " " << m_age << " " << m_health << " " << std::endl;
}