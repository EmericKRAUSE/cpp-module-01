#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	Weapon sword = Weapon("shiny iron sword");
	HumanB jim("Jim");
	jim.attack();
	jim.setWeapon(&sword);
	jim.attack();
	sword.setType("some other type of sword");
	jim.attack();

	return 0;
}
