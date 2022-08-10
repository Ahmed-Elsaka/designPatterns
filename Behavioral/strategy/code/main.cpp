#include <iostream>
#include "character.h"
#include "WeaponX.h"
#include "WeaponY.h"
#include "RegularKick.h"
#include "RegularPush.h"

int main(){

    // create character
    Character player{"ahmed","NA",28,100};
    // create weapons
    std::shared_ptr<Weapon>weaponX {std::make_shared<Weapon>("waponX",100,100,10)};
    std::cout << weaponX->getShots() << std::endl;
    std::shared_ptr<Weapon>weaponY {std::make_shared<Weapon>("WeaponY",200,200,20)};
    // create Attacks 
    std::shared_ptr<AttackBehavior>regKick{std::make_shared<RegularKick>()};
    std::shared_ptr<AttackBehavior>regPush{std::make_shared<RegularPush>()};

    // assign weapons to character:
    player.addWeapon(weaponX);
    player.addWeapon(weaponY);

    // add kik and push to character : 
    player.setKickBehavior(regKick);
    player.setPushBehavior(regPush);

    // test player behavior
    player.print();
    player.run();
    player.jump();
    player.kick();
    player.push();
    player.getWeaponOut();
    player.fire();
    player.changeWeapon();
    player.fire();
    player.pushWeaponIn();
    player.fire();






    return 0 ; 
}