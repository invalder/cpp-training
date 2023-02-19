#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void)
{
    {
        Weapon club = Weapon("crude spiked club");
        HumanA bob("Bob", club);
        bob.attack();
        club.setType("some other type of club");
        bob.attack();
    }
    {
        Weapon club = Weapon("Elder wand");
        HumanB jim("Jim");
        jim.setWeapon(club);
        jim.attack();
        club.setType("Phoenix Wand!!!");
        jim.attack();
    }
    return 0;
}
