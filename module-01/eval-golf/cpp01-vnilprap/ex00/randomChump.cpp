#include "Zombie.hpp"

// It creates a zombie, name it, and the zombie announces itself.
void randomChump(std::string name)
{
    Zombie *zombie = new Zombie;
    zombie->setName(name);
    zombie->announce();
	delete zombie;
}
