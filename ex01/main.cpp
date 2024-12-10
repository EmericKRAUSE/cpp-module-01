#include "Zombie.hpp"

int main()
{
	Zombie *horde = zombieHorde(8, "Gerard");
	delete [] horde;
	return (0);
}
