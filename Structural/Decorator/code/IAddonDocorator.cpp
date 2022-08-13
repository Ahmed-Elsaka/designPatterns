#include "IAddonDocorator.h"

IAddonDocorator::IAddonDocorator(std::shared_ptr<IBeverage> beverage, std::string description, double cost){
    m_description = description;
    m_cost = cost;
    m_beverage = beverage;
    }

IAddonDocorator::~IAddonDocorator(){}


