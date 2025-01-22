#include "main.hpp"

int	ft_error(std::string errorMessage)
{
	std::cerr << RED << errorMessage << RESET << std::endl;
	return (1);
}

std::string searchAndReplace(std::string str, std::string target, std::string replace)
{
	size_t actualPos = 0;;
	size_t lastPos = 0;
	std::string newStr;

	while ((actualPos = str.find(target, actualPos)) != std::string::npos)
	{
		newStr += str.substr(lastPos, actualPos - lastPos) + replace;
		actualPos += target.length();
		lastPos = actualPos;
	}
	newStr += str.substr(lastPos);
	return (newStr);
}

int main(int argc, char **argv)
{
	if (argc != 4)
		return (ft_error("[filename], [target string], [string to replace with]"));

	const std::string	inputFileName = argv[1];
	const std::string	targetString = argv[2];
	const std::string	toReplaceWith = argv[3];
	std::string			outputFileName = inputFileName + ".replace";

	if (targetString.empty())
		return (ft_error("Target string cannot be empty"));

	std::ifstream inputFile(inputFileName);
	if (!inputFile)
		return (ft_error("Error while opening the input file"));

	std::ofstream outputFile(outputFileName);
	if (!inputFile)
		return (ft_error("Error while creating the output file"));

	std::string string;
	while (std::getline(inputFile, string))
		outputFile << searchAndReplace(string, targetString, toReplaceWith) << std::endl;

	inputFile.close();
	outputFile.close();
}
