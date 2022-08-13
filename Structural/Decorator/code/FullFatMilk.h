#ifndef FULLFATMILK_H
#define FULLFATMILK_H
#include "IAddonDocorator.h"
    class FullFatMilk : public IAddonDocorator{
        public :
            FullFatMilk(std::shared_ptr<IBeverage> beverage, std::string description, double cost);
            std::string getDescription() const override;
            double getCost() const override;
    };

#endif