#ifndef REGULAR_KICK_H
#define REGULAR_KICK_H

#include <iostream>
#include "AttackBehavior.h"

class RegularKick:public AttackBehavior{
    public:
        void attack() override;
};

#endif