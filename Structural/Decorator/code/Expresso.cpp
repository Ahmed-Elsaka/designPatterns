#include "Expresso.h"

Expresso::Expresso(std::string description, double cost)
:IBeverage(description, cost){}

std::string Expresso::getDescription() const {return m_description;}
double Expresso::getCost() const {return m_cost;}