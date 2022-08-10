#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include "Weapon.h"
#include "AttackBehavior.h"

class Character{
    public:
        Character();
        Character(std::string name, std::string capabilities, int age , int health);
        ~Character();

        // getters
        std::string getName();
        std::string getCapabilities();
        int getAge();
        int getHealth();
        // setters : 
        void setName(std::string name);
        void setCapabilities(std::string cap);
        void setAge(int age);
        void setHealth(int Health);
        void setPushBehavior(std::shared_ptr<AttackBehavior> push_behavior);
        void setKickBehavior(std::shared_ptr<AttackBehavior> kick_brhavior);

        // actions 
        void run() ; 
        void jump();
        void kick(); 
        void push();
        void fire(); 
        void changeWeapon();
        void getWeaponOut();
        void pushWeaponIn();
        void addWeapon(std::shared_ptr<Weapon> weap);
        bool hasMoreThanOneWeapon();
        bool hasWeapon(); 

        // helpers 
        void print();



    private:
        std::string m_name;
        std::string m_capabilities;
        int m_age;
        int m_health;
        int m_currrentWeaponIndex;

        std::vector<std::shared_ptr<Weapon>> m_weapons;
        std::shared_ptr<Weapon> m_currentWeapon;

        std::shared_ptr<AttackBehavior> m_pushBehavior;
        std::shared_ptr<AttackBehavior> m_kickBehavior;
        
};


#endif