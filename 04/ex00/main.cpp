#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{ 
	{
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();
		const Animal *notype = new Animal();

		std::cout << "Dog's type: " << dog->getType() << std::endl;
		std::cout << "Cat's type: " << cat->getType() << std::endl;
		std::cout << "Animal's type: " 	<< notype->getType() << std::endl;

		dog->makeSound();
		cat->makeSound();
		notype->makeSound();

		delete dog;
		delete cat;
		delete notype;
	}
	{
		const WrongAnimal *cat = new WrongCat();
//		const WrongCat *test = new WrongCat();
		const WrongAnimal *notype = new WrongAnimal();

		std::cout << "WrongCat's type: " << cat->getType() << std::endl;
//		std::cout << "WrongCat's type: " << test->getType() << std::endl;
		std::cout << "WrongAnimal's type: " << notype->getType() << std::endl;

		cat->makeSound();
//		test->makeSound();
		notype->makeSound();

		delete cat;
		delete notype;
//		delete test;
	}
}
