#include "Convert.hpp"

Convert::Convert ( void ) {}

Convert::Convert ( const Convert &copy ) {
	*this = copy;
}

Convert::~Convert ( void ) {}

Convert &Convert::operator = ( const Convert &right ) {
	(void)right;
	return (*this);
}

std::string Convert::getType ( std::string arg ) const {
	if ((arg.length() > 3 && arg.at(arg.length() - 1) == 'f')
				|| arg == "nanf")
		return ("float");
	else if ((arg.length() > 2 && arg.find(".") != std::string::npos)
				|| arg == "nan" || arg == "-inf" || arg == "+inf")
		return ("double");
	else if (arg.length() == 1)
	{
		char c = arg.at(0);

		if (c >= '0' && c <= '9')
			return ("int");
		else if (c >= 32 || c <= 126)
			return ("char");
		return ("invalid");
	}
	return ("int");
}

void Convert::display ( char c ) const {
	std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) <<static_cast<double>(c) << std::endl;
}

void Convert::display ( int i ) const {
	if (i > 256 || i < 0)
		std::cout << "char: impossible" << std::endl;
	else if (i > 126 || i < 32)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;

	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(i) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(i) << std::endl;
}

void Convert::display ( float f ) const {
	if (f > 256.0 || f < 0.0 || isnan(f))
		std::cout << "char: impossible" << std::endl;
	else if (f > 126.0 || f < 32.0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;

	if (f < INT_MIN || f > INT_MAX || isnan(f))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;

	std::cout << "float: " << f << "f" << std::endl;

	std::cout << "double: " << static_cast<double>(f) << std::endl;
}

void Convert::display ( double d ) const {
	if (d > 256.0 || d < 0.0 || isnan(d) )
		std::cout << "char: impossible" << std::endl;
	else if (d > 126.0 || d < 32.0)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	
	if (d < INT_MIN || d > INT_MAX || isnan(d))
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;

	if (d < __FLT_MIN__ || d > __FLT_MAX__)
		std::cout << "float: impossible" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;

	std::cout << "double: " << d << std::endl;
}

void Convert::execution ( Convert convert, char *argv ) const {
	std::string arg = static_cast<std::string>(argv);
	std::string	type = convert.getType(arg);

	if (type == "char")
	{
		char c = arg.at(0);	
		convert.display(c);
	}
	else if (type == "int")
	{
		int i = std::atoi(argv); // Use ATOI because ABORT ERROR with stoi for input like "test"
		convert.display(i);
	}
	else if (type == "float")
	{
		float f = std::stof(arg);
		convert.display(f);
	}
	else if (type == "double")
	{
		double d = std::stod(arg);
		convert.display(d);
	}
	else if (type == "invalid")
		std::cout << "Error: Invalid Character Input." << std::endl;
}

