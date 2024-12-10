#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		// Attributes
		//====================//
		std::string	_name;
		Weapon		_weapon;

	public:
		// Constructor & Destructor
		//====================//
		HumanB();
		~HumanB();

		// Member functions
		//====================//
		void attack() const;
};

#endif