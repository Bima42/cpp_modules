#include "PhoneBook.hpp"

int main(void)
{
    bool loop;
    PhoneBook book;
    std::string command;

    loop = true;
    while (loop)
    {
		std::cout << "ADD, SEARCH or EXIT ? " << std::endl;
        std::getline(std::cin, command);
        if (command == "ADD")
            book.addContact();
        else if (command == "SEARCH")
          book.searchContact();
        else if (command == "EXIT")
        {
            std::cout << "Exit called." << std::endl;
            loop = false;
        }
    }
    return 0;
}
