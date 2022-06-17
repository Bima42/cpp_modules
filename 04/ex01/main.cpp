#include "Dog.hpp"
#include "Cat.hpp"
#include <sstream>

# define AMOUNT 5

int main()
{
	Animal *animals[AMOUNT];

	int 				i;
	std::string 		result;
	std::ostringstream 	convert;

	for (i = 0; i < AMOUNT / 2; i++) {
		animals[i] = new Dog();
		std::string *ideas = dynamic_cast<Dog *>(animals[i])->getBrain()->getIdeas();
		for (int j = 0; j < 100; j++) {
			convert << "Dog: " << i << " | Ideas: " << j << std::endl;
			result = convert.str();
			ideas[j] = result;
			convert.str("");
			convert.clear();
		}
	}
	for (;i < AMOUNT; i++) {
		animals[i] = new Cat();
		std::string *ideas = dynamic_cast<Cat *>(animals[i])->getBrain()->getIdeas();
		for (int j = 0; j < 100; j++) {
			convert << "Cat: " << i << " | Ideas: " << j << std::endl;
			result = convert.str();
			ideas[j] = result;
			convert.str("");
			convert.clear();
		}
	}

	int j;
	for (j = 0; j < AMOUNT / 2; j++) {
		dynamic_cast<Dog *>(animals[j])->getBrain()->printIdeas();
	}
	for (; j < AMOUNT; j++) {
		dynamic_cast<Cat *>(animals[j])->getBrain()->printIdeas();
	}

	while (i-- > 0)
		delete animals[i];

	return 0;
}
