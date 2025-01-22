#ifndef HARL_HPP
# define HARL_HPP

# include <string>
# include <iostream>

class Harl 
{
	private:
		// Private Member Functions
		//====================//
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);

	public:
		// Constructor & Destructor
		//====================//
		Harl();
		~Harl();
		// Public Member Functions
		//====================//
		void complain(std::string level);
};

#endif
