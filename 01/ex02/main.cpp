#include <iostream>
#include <string>

int main ( void )
{
	std::string		str;
	std::string*	ptr = &str;
	std::string&	ref = str;

	str = "HI THIS IS BRAIN";
	std::cout << "Memory address of string : " << &str << std::endl;
	std::cout << "Memory address of pointer : " << ptr << std::endl;
	std::cout << "Memory address of reference : " << &ref << std::endl;

	std::cout << "-----------------------------------" << std::endl;

	std::cout << "Value of string variable : " << str << std::endl;
	std::cout << "Value of string variable : " << *ptr << std::endl;
	std::cout << "Value of string variable : " << ref << std::endl;
}
