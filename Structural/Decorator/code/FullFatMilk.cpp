#include "FullFatMilk.h"

FullFatMilk::FullFatMilk(std::shared_ptr<IBeverage> beverage, std::string description, double cost):
IAddonDocorator(beverage,description,cost){ }

std::string FullFatMilk::getDescription() const {
    return m_beverage->getDescription() + m_description;
}
double FullFatMilk::getCost() const {
    return m_beverage->getCost() + m_cost;
}