#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	std::cout	<< "HumanB named "
				<< CYAN
				<< _name
				<< RESET
				<< " has been created without any Weapon"
				<< std::endl;
}

HumanB::~HumanB()
{
	std::cout	<< CYAN
				<< _name
				<< RESET
				<< " has been deleted"
				<< std::endl;
}

void HumanB::setWeapon(Weapon *weapon)
{
	_weapon = weapon;
}

void HumanB::attack() const
{
	if (_weapon)
	{
		std::cout	<< CYAN
					<< _name
					<< RESET
					<< " attacks with his "
					<< CYAN
					<< _weapon->getType()
					<< RESET
					<< std::endl;
	}
	else
	{
		std::cout	<< CYAN
					<< _name
					<< RESET
					<< " has no Weapon to attack with"
					<< std::endl;
	}
}
