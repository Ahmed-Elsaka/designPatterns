#include <iostream>
#include "Expresso.h"
#include "FullFatMilk.h"
#include "Chocolate.h"
#include "IAddonDocorator.h"
#include "IBeverage.h"
#include <memory>
int main()
{

    std::shared_ptr<Expresso> exp{std::make_shared<Expresso>("expresso",10)};
    std::shared_ptr<FullFatMilk> ffm(std::make_shared<FullFatMilk>(exp,"milk",5));
    Chocolate ch(ffm, "chocolate,",4);
    std::cout << ch.getCost()<< " " << ch.getDescription()<< std::endl;
    return 0 ; 
}