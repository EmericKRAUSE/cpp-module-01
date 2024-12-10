#include "HumanB.hpp"

void HumanB::attack() const
{
	std::cout << this->_name
			  << "attacks with their"
			  << this->_weapon.getType()
			  << std::endl;
}