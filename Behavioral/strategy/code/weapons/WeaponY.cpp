#include <iostream>
#include <WeaponY.h>

void WeaponY::fire() {
    Weapon::fire();
    std::cout << "Weapon fire from WeaponY........\n";
}
