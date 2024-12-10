#include <string>
#include <iostream>

# define CYAN "\033[36m"
# define RESET "\033[0m"

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPTR = &string;
	std::string &stringREF = string;

	std::cout << CYAN << "Memory adresses:" << RESET << std::endl;
	std::cout << &string << std::endl;
	std::cout << &stringPTR << std::endl;
	std::cout << &stringREF << std::endl;

	std::cout << CYAN << "Values:" << RESET << std::endl;
	std::cout << string << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
}
