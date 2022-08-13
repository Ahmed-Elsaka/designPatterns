#ifndef CHOCOLATE_H
#define CHOCOLATE_H
#include "IAddonDocorator.h"
    class Chocolate: public IAddonDocorator{
        public :
            Chocolate(std::shared_ptr<IBeverage> beverage, std::string description, double cost);
            std::string getDescription()const override;
            double getCost() const override;
    };

#endif