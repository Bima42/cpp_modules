#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <iomanip>
#include <string>
#include "Contact.hpp"

class PhoneBook {

private:
	Contact contact[8];
	int		count;

public:

	PhoneBook( void );
	~PhoneBook( void );
	void	printFormat( std::string );
	void	printHeader();
	void	printContact(int i);
	void	addContact();
	void	searchContact();
	void	collectInfos();

};

#endif
