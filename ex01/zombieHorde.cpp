#include "Zombie.hpp"

Zombie *zombieHorde(int N, std::string name)
{
	if (N < 1 || N > __INT_MAX__)
	{
		std::cout << RED << "error: " << N << " is not a valid number" RESET << std::endl;
		return (NULL);
	}
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
		horde[i].announce();
	}
	return (horde);
}