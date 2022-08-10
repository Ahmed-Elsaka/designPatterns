#include <iostream>
#include "Weapon.h"


Weapon::Weapon(std::string name, int power, int rate, int maxshots)
:m_name{name}, m_power{power}, m_rate{rate}, m_maxShots{maxshots}, m_shots{maxshots}
{ 
}

// getters : 
std::string Weapon::getName() { return m_name;}

int Weapon::getPower(){ return m_power;}
int Weapon::getMaxShots(){ return m_maxShots; }
int Weapon::getShots() { return m_shots; }

void Weapon::setName(std::string name)
{
    m_name = name;
}

void Weapon::setPower(int power){
    m_power = power;
}

void Weapon::setRate(int rate)
{
    m_rate = rate;
}

void Weapon::setShots(int shots)
{
    m_shots = shots;
}

void Weapon::setMaxShots(int maxshots)
{
    m_maxShots = maxshots;
}

void Weapon::fire()
{
    --m_shots;
    std::cout << m_name << "is firing, remaining shots = " << m_shots << std::endl;
}

void Weapon::reload()
{
    m_shots = m_maxShots;
}

void Weapon::print()
{
    std::cout << "name = " << m_name << " power = " << m_power << " rate = " << m_rate << " maxShots = " << m_maxShots << " shots = " << m_shots << std::endl;
}