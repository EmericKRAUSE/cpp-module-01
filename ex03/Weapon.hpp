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
		Weapon();
		~Weapon();

		// Member functions
		//====================//
		const std::string&	getType() const;
		void				setType(std::string &newType);
};

#endif
