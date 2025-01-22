#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) :  _name(name), _weapon(weapon)
{
	std::cout	<< "HumanA named "
				<< CYAN
				<< _name
				<< RESET
				<< " has been created with "
				<< CYAN
				<< _weapon.getType()
				<< RESET
				<< " has a weapon"
				<< std::endl;
}

HumanA::~HumanA()
{
	std::cout	<< CYAN
				<< _name
				<< RESET
				<< " has been deleted"
				<< std::endl;
}

void HumanA::attack() const
{
	std::cout	<< CYAN
				<< _name
				<< RESET
				<< " attacks with his "
				<< CYAN
				<<  _weapon.getType()
				<< RESET
				<< std::endl;
}
