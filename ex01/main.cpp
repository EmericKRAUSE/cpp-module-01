#include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(1000, "Gerard");
	delete [] horde;
	return (0);
}
