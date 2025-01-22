#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>
# include <iostream>

class Weapon
{
	private:
		// Attributes
		//====================//
		std::string _type;

	public:
		// Constructor & Destructor
		//====================//
		Weapon(std::string type);
		~Weapon();

		// Member functions
		//====================//
		const std::string	&getType() const;
		void				setType(const std::string &newType);
};

#endif
