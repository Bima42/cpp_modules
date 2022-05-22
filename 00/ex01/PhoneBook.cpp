#include "PhoneBook.hpp"

PhoneBook::PhoneBook ( void ) {
	std::cout << "Constructor called" << std::endl;
	this->count = 0;
	return;
}

PhoneBook::~PhoneBook ( void ) {
	std::cout << "Destructor called" << std::endl;
	return;
}

void	PhoneBook::searchContact( void ) {
	std::cout << "Enter an index : " << std::endl;
}

void	PhoneBook::collectInfos( void ) {
	std::string	infos;

    std::cout << "First_name : " << std::endl;
    std::cin >> infos;
    this->contact[this->count].first_name = infos;

    std::cout << "Last_name : " << std::endl;
    std::cin >> infos;
    this->contact[this->count].last_name = infos;

    std::cout << "Nickname : " << std::endl;
    std::cin >> infos;
    this->contact[this->count].nickname = infos;
	std::cin.ignore();

    std::cout << "Darkest secret : " << std::endl;
    std::getline(std::cin, infos);
    this->contact[this->count].secret = infos;
}

void	PhoneBook::addContact() {
    std::string infos;

	if (this->count == 8)
		this->count = 0;
	this->collectInfos();
	this->count++;
};
