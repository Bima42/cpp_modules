#include "Dog.hpp"
#include "Cat.hpp"

# define AMOUNT 5

int main()
{
	Animal *animals[AMOUNT];

	int i;
	for (i = 0; i < AMOUNT / 2; i++) {
		animals[i] = new Dog();
		std::string *ideas = const_cast<std::string *>(dynamic_cast<Dog *>(animals[i])->getBrain()->getIdeas());
		for (int j = 0; j < 100; j++) {
			ideas[j] = "Dog: " + std::to_string(i) + " | Ideas: " + std::to_string(j);
		}
	}
	for (;i < AMOUNT; i++) {
		animals[i] = new Cat();
		std::string *ideas = const_cast<std::string *>(dynamic_cast<Cat *>(animals[i])->getBrain()->getIdeas());
		for (int j = 0; j < 100; j++) {
			ideas[j] = "Cat: " + std::to_string(i) + " | Ideas: " + std::to_string(j);
		}
	}

	int j;
	for (j = 0; j < AMOUNT / 2; j++) {
		dynamic_cast<Dog *>(animals[j])->getBrain()->printIdeas();
	}
	for (; j < AMOUNT; j++) {
		dynamic_cast<Cat *>(animals[j])->getBrain()->printIdeas();
	}

	while (i --> 0)
		delete animals[i];

	return 0;
}
