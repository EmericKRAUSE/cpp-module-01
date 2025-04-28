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
		Zombie();
		~Zombie();

		// Member functions
		//====================//
		void announce(void) const;
		void setName(std::string name);
};

Zombie *zombieHorde(int N, std::string name);

#endif
