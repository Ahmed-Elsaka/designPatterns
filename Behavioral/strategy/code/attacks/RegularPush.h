#ifndef REGULAR_PUSH_H
#define REGULAR_PUSH_H

#include <iostream>
#include "AttackBehavior.h"

class RegularPush:public AttackBehavior{
    public:
        void attack() override;
};

#endif