#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>

# define RED "\033[31m"
# define GREEN "\033[32m"
# define CYAN "\033[36m"
# define RESET "\033[0m"

class Zombie
{
	private:
		// Attributes
		//====================//
		std::string _name;

	public:
		// Constructor & Destructor
		//====================//
		Zombie(std::string name);
		~Zombie();

		// Member functions
		//====================//
		void announce(void) const;
};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
