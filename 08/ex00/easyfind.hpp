#ifndef EASYFIND_H
# define EASYFIND_H

# include <algorithm>
# include <iterator>

template< typename T >
int easyfind ( T &container, int nb )
{
	typename T::iterator search = std::find(container.begin(), container.end(), nb);
	if (search == container.end())
		return (-1);
	return (std::distance(container.begin(), search));
}

/*
 * We could use Exceptions, but may be its overkill ...
 * Here we use const_iterator, we can't using std::distance because container.begin() is not const
typename T::const_iterator easyfind ( T & container, int nb )
{
	typename T::const_iterator search = std::find(container.begin(), container.end(), nb);
	if (search == container.end())
		throw std::invalid_argument("Argument not found. Try another value please.");
	return search;
}*/


#endif
