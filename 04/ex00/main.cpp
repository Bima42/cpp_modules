#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{ 
	{
		std::cout << "🚧 =========== TEST : Part 1 ============= 🚧" << std::endl;
		Animal	test;

		test.setType("Mammouth");
		std::cout << "Animal Instance : " << test.getType();
		std::cout << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "🚧 =========== TEST : Part 2 ============= 🚧" << std::endl;
		const Animal *dog = new Dog();
		const Animal *cat = new Cat();
		const Animal *notype = new Animal();

		std::cout << std::endl;
		std::cout << "Dog's type: " << dog->getType() << std::endl;
		std::cout << "Cat's type: " << cat->getType() << std::endl;
		std::cout << "Animal's type: " 	<< notype->getType() << std::endl;
		std::cout << std::endl;

		dog->makeSound();
		cat->makeSound();
		notype->makeSound();
		std::cout << std::endl;

		delete dog;
		delete cat;
		delete notype;
	}
	{
		std::cout << std::endl;
		std::cout << "🚧 =========== TEST : Part 3 ============= 🚧" << std::endl;
		const WrongAnimal 	*cat = new WrongCat();
		const WrongAnimal 	*notype = new WrongAnimal();
		const WrongCat		test;

		std::cout << std::endl;
		std::cout << "WrongCat's type: " << cat->getType() << std::endl;
		std::cout << "WrongAnimal's type: " << notype->getType() << std::endl;
		std::cout << "WrongCat's type instancied by WrongCat: " << cat->getType() << std::endl;
		std::cout << std::endl;

		cat->makeSound();
		notype->makeSound();
		test.makeSound();
		std::cout << std::endl;

		delete cat;
		delete notype;
	}
}
