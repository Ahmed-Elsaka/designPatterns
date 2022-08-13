#ifndef EXPRESSO_H
#define EXPRESSO_H
#include "IBeverage.h"
    class Expresso : public IBeverage{

        public:
            Expresso(std::string description, double cost);
            std::string getDescription() const override;
            double getCost() const override;
    };
#endif