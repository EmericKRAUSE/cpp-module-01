#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	//-- Human A --//
	Weapon club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();

	//-- Human B --//
	Weapon sword = Weapon("shiny iron sword");
	HumanB jim("Jim");
	// Without weapon
	jim.attack();
	jim.setWeapon(&sword);
	// With Weapon
	jim.attack();
	sword.setType("some other type of sword");
	jim.attack();

	return 0;
}
