#include "Zombie.hpp"

// Constructor
Zombie::Zombie(std::string name): _name(name) {};

// Destructor
Zombie::~Zombie()
{
	std::cout << this->_name << " died in excruciating pain" << std::endl;
};

// Member functions
void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
