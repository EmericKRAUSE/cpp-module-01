#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

#define CYAN "\033[36m"
#define RESET "\033[0m"

class HumanA
{
	private:
		// Attributes
		//====================//
		std::string	_name;
		Weapon		&_weapon;

	public:
		// Constructor & Destructor
		//====================//
		HumanA(std::string name, Weapon &weapon);
		~HumanA();

		// Member functions
		//====================//
		void attack() const;
};

#endif
