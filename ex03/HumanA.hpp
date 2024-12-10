#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		// Attributes
		//====================//
		std::string	_name;
		Weapon		_weapon;

	public:
		// Constructor & Destructor
		//====================//
		HumanA();
		~HumanA();

		// Member functions
		//====================//
		void attack() const;
};

#endif
