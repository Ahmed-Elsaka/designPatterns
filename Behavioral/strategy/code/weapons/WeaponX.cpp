#include <iostream>
#include <WeaponX.h>

void WeaponX::fire() {
    Weapon::fire();
    std::cout << "Weapon fire from WeaponX........\n";
}
