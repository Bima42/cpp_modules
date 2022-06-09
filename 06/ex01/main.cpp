#include "Data.hpp"

int main ( void )
{
	Data data;

	data.setContent("Yvan noob");
	std::cout << "🚧 ----------- TEST : Reinterpret Cast ----------- 🚧" << std::endl;
	std::cout << "Block Address of Data : " << &data << std::endl;
	std::cout << "Content of Data : " << data.getContent() << std::endl;

	std::cout << std::endl;
	uintptr_t intptr = serialize(&data);
	std::cout << "### ... Serialize ... ###" << std::endl;
	Data *dataptr = deserialize(intptr);
	std::cout << "### ... Deserialize ... ###" << std::endl;

	std::cout << std::endl;
	std::cout << "New Block Address : " << dataptr << std::endl;
	std::cout << "New Block Content : " << dataptr->getContent() << std::endl;

	return (0);
}
