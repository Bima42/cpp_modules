#ifndef PHONEBOOK_H
# define PHONEBOOK_H

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {

public:

	PhoneBook( void );
	~PhoneBook( void );
	Contact	contact[8];
	void	addContact();
	void	searchContact();
	void	collectInfos();
	int		count;

};

#endif
