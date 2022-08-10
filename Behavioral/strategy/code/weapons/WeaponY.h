#ifndef WEAPONY_H
#define WEAPONY_H

#include <iostream>
#include "Weapon.h"

class WeaponY : public Weapon
{
    using Weapon::Weapon;
    void fire() override;
};



#endif