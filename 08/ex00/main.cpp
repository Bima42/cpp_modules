#include "easyfind.hpp"
#include <vector>
#include <iostream>
#include <list>

int main ( void )
{
	std::vector<int> vec;
	std::list<int> list;

	vec.push_back(20);
	vec.push_back(5);
	vec.push_back(89);
	vec.push_back(1);
	vec.push_back(24);
	
	list.push_back(65);
	list.push_back(9876);
	list.push_back(1);
	list.push_back(-54);

	std::cout << "🚧 ==== TEST : Vector Success ==== 🚧" << std::endl;
	int ret = easyfind(vec, 5);
	if (ret == -1)
		std::cout << "Wrong arguments : no occurence found for 5." << std::endl;
	else
		std::cout << "Occurence found for 5 ! Index : " << ret << std::endl;

	std::cout << std::endl;
	std::cout << "🚧 ==== TEST : Vector Failure ==== 🚧" << std::endl;
	ret = easyfind(vec, 654);
	if (ret == -1)
		std::cout << "Wrong arguments : no occurence found for 654." << std::endl;
	else
		std::cout << "Occurence found for 654 ! Index : " << ret << std::endl;

	std::cout << std::endl;

	std::cout << "🚧 ==== TEST : List Success ==== 🚧" << std::endl;
	ret = easyfind(list, -54);
	if (ret == -1)
		std::cout << "Wrong arguments : no occurence found for -54." << std::endl;
	else
		std::cout << "Occurence found for -54 ! Index : " << ret << std::endl;

	std::cout << std::endl;
	std::cout << "🚧 ==== TEST : List Failure ==== 🚧" << std::endl;
	ret = easyfind(vec, 0);
	if (ret == -1)
		std::cout << "Wrong arguments : no occurence found for 0." << std::endl;
	else
		std::cout << "Occurence found for 0 ! Index : " << ret << std::endl;

	return (0);

/* MAIN FOR EXCEPTIONS USING LIST
    try {
        std::list<int>::const_iterator it = easyfind(list, 65);
        std::cout << "Result: " << *it << std::endl;
    } catch (std::invalid_argument & ex) {
        std::cerr << ex.what() << std::endl;
    }	

    try {
        std::list<int>::const_iterator it = easyfind(list, 0);
        std::cout << "Result: " << *it << std::endl;
    } catch (std::invalid_argument & ex) {
        std::cerr << ex.what() << std::endl;
    }*/	
}
