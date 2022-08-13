#include "IBeverage.h"

IBeverage::IBeverage(std::string description,
                     double cost)
:m_description{description},m_cost{cost}
{

}

IBeverage::IBeverage()
{
    m_description ="null";
    m_cost = -1;
}
