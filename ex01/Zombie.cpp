#include "Zombie.hpp"

// Constructor
//====================//
Zombie::Zombie() {};

// Destructor
//====================//
Zombie::~Zombie()
{
	std::cout << this->_name << " died in excruciating pain" << std::endl;
};

// Member functions
//====================//
void Zombie::announce(void) const
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie:: setName(std::string name)
{
	this->_name = name;
}
