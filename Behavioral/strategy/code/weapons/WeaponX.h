#ifndef WEAPONX_H
#define WEAPONX_H

#include <iostream>
#include "Weapon.h"

class WeaponX : public Weapon
{
    using Weapon::Weapon;

    void fire() override;
};



#endif