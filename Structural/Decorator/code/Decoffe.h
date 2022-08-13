#ifndef DECOFFE_H
#define DECOFFE_H
#include "IBeverage.h"

class Decoffe : public IBeverage{
    // using IBeverage::IBeverage;
    public : 
        // Decoffe(std::string description, double cost);
        std::string getDescription() const override;
        double getCost() const override;
};

#endif