#include "main.hpp"

int	checkArgs(std::string &arg, std::string &s1, std::string &s2, std::ifstream &file)
{
	if (arg.empty() || s1.empty() || s2.empty())
	{
		std::cout << "Error: an empty string was sent" << std::endl;
		return (0);
	}

	if (file.fail())
	{
		std::cerr << "Error: " << strerror(errno) << std::endl;
		return (0);
	}

	if (file.peek() == EOF)
	{
		std::cout << "Error: Empty File" << std::endl;
		return (0);
	}
	return (1);	
}

int	replaceString(std::string arg, std::string s1, std::string s2)
{
	bool replaced = false;
	std::ifstream file(arg);
	std::ofstream newFile;
	std::string	nameFile;
	std::string	tmp;

	if (!checkArgs(arg, s1, s2, file))
		return (0);

	nameFile = arg;
	nameFile.append(".replace", 8);

	newFile.open(nameFile);
	if (!newFile.is_open() || newFile.bad())
	{	
		std::cout << "Error: File corrupted, cannot be open" << std::endl;
		return (0);
	}

	while (std::getline(file, tmp))
	{
		if (tmp == s1)
		{
			replaced = true;
			newFile << s2 << std::endl;
		}
		else
			newFile << tmp << std::endl;
	}

	file.close();
	newFile.close();

	if (replaced == false)
		std::cout << "No occurence found. File has been created, but still unchanged" << std::endl;

	return (1);
}

int	main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error: Wrong arguments" << std::endl;
		std::cout << "1: Filename | 2: string | 3: string" << std::endl;
		return (1);
	}
	else
		if (!(replaceString(argv[1], argv[2], argv[3])))
			return (1);
	return (0);
}
