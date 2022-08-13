#ifndef IADDONDOCORATOR_H
#define IADDONDOCORATOR_H
#include "IBeverage.h"
#include <memory>

class IAddonDocorator : public IBeverage{
    protected:
        std::shared_ptr<IBeverage> m_beverage;
    public : 
        IAddonDocorator(std::shared_ptr<IBeverage>beverage, std::string description, double cost);
        ~IAddonDocorator();
        virtual std::string getDescription()const =0;

        virtual double getCost() const=0;


};
#endif