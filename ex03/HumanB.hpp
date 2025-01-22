#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

#define CYAN "\033[36m"
#define RESET "\033[0m"

class HumanB
{
	private:
		// Attributes
		//====================//
		std::string	_name;
		Weapon		*_weapon;

	public:
		// Constructor & Destructor
		//====================//
		HumanB(std::string name);
		~HumanB();

		// Member functions
		//====================//
		void setWeapon(Weapon *weapon);
		void attack() const;
};

#endif
