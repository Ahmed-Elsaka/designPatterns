#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>

class Weapon{
    public : 
        Weapon(std::string name, int power, int maxshots, int shots);
        ~Weapon() = default;

        // getters : 
        std::string  getName();
        int getPower(); 
        int getMaxShots() ; 
        int getShots(); 


        // setters : 
        void setName(std::string name);
        void setPower(int power);
        void setRate(int rate);
        void setMaxShots(int maxshots);
        void setShots(int shots);


        // actions 
        virtual void fire() ; 
        void reload() ; 

        //helper function
        void print();


    private : 
        std::string m_name;
        int m_power;
        int m_maxShots;
        int m_shots;
        int m_rate;
};



#endif