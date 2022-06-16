#include <sstream>
#include <iostream>

long    ft_stol(const std::string &str)
{
    long    i;

    if (std::istringstream(str) >> i)
        return (i);
    else
        throw std::exception();
}

int    ft_stoi(const std::string &str)
{
    int    i;

    if (std::istringstream(str) >> i)
        return (i);
    else
        throw std::exception();
}

double    ft_stod(const std::string &str)
{
    double    i;

    if (std::istringstream(str) >> i)
        return (i);
    else
        throw std::exception();
}
