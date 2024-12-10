#include "Zombie.hpp"

int main()
{
	std::cout << CYAN << "Zombie allocated on the stack:" << RESET << std::endl;
	randomChump("Gerard Depardieu");
	std::cout << CYAN << "Zombie allocated on the heap:" << RESET << std::endl;
	Zombie *zombie = newZombie("Philippe Etchebest");
	zombie->announce();
	delete zombie;
	return (0);
}