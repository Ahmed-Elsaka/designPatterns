#ifndef IBEVERAGE_H
#define IBEVERAGE_H

#include <iostream>

class IBeverage{
    protected : 
        double m_cost; 
        std::string m_description;
    public : 
        IBeverage();
        IBeverage(std::string description , double cost);
        virtual double getCost() const = 0;
        virtual std::string getDescription() const = 0;
};


#endif