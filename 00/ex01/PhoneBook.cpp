#include "PhoneBook.hpp"

PhoneBook::PhoneBook ( void ) {
	std::cout << "Welcome." << std::endl;
	this->count = -1;
	return;
}

PhoneBook::~PhoneBook ( void ) {
	return;
}

void PhoneBook::printFormat ( std::string str) {
	if (str.size() > 10)
	{
		str = str.insert(9, ".");
		str = str.substr(0, 10);
	}
	else
		std::cout << std::setw(10);
	std::cout << str;
}

void	PhoneBook::printHeader ( void ) {
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First name| Nast name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < 8; i++) {
		std::cout << "|         " << i + 1 << "|";
		printFormat(this->contact[i].getFirstName());
		std::cout << "|";
		printFormat(this->contact[i].getLastName());
		std::cout << "|";
		printFormat(this->contact[i].getNickName());
		std::cout << "|" << std::endl;
	}
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	PhoneBook::printContact ( int i ) {
	std::cout << "|         " << i << "|";
	printFormat(this->contact[i - 1].getFirstName());
	std::cout << "|";
	printFormat(this->contact[i - 1].getLastName());
	std::cout << "|";
	printFormat(this->contact[i - 1].getNickName());
	std::cout << "|" << std::endl;
}

void	PhoneBook::searchContact ( void ) {
	int	index = -1;

	if (this->count == -1)
		std::cout << "Add a contact before searching" << std::endl;
	else
	{
		printHeader();
		std::cout << "Please, enter an index. 0 to quit: ";
		while (!(std::cin >> index) || (index < 0 || index > 8))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid Index\n>";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index > 0)
			printContact(index);
	}
}

void	PhoneBook::collectInfos ( void ) {
	std::string	infos;

    std::cout << "First_name : " << std::endl;
    std::cin >> infos;
    this->contact[this->count].setFirstName(infos);

    std::cout << "Last_name : " << std::endl;
    std::cin >> infos;
    this->contact[this->count].setLastName(infos);

    std::cout << "Nickname : " << std::endl;
    std::cin >> infos;
    this->contact[this->count].setNickName(infos);
	std::cin.ignore();

    std::cout << "Darkest secret : " << std::endl;
    std::getline(std::cin, infos);
    this->contact[this->count].setSecret(infos);
}

void	PhoneBook::addContact() {
    std::string infos;

	if (this->count == 8 || this->count == -1)
		this->count = 0;
	this->collectInfos();
	this->count++;
}
