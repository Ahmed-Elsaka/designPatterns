#include "Chocolate.h" 

Chocolate::Chocolate(std::shared_ptr<IBeverage> beverage, std::string description, double cost):
IAddonDocorator(beverage,description,cost){ }

std::string Chocolate::getDescription() const {
    return m_beverage->getDescription() + m_description;
}
double Chocolate::getCost() const {
    return m_beverage->getCost() + m_cost;
}