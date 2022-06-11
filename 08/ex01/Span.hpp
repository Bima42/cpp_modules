#ifndef SPAN_H
# define SPAN_H

#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>

class Span {

	public:
		Span ( void );
		Span ( unsigned int N );
		Span ( const Span &copy );
		~Span ( void );

		Span &operator=( const Span &right );

		std::vector<int> getVec ( void ) const;
		int getIndex ( void ) const;
		int getMax ( void ) const;

		void addNumber ( int nb );
		int longestSpan ( void ) const;
		int shortestSpan ( void ) const;

		void insert(std::vector<int>::iterator &pos, int count, int value);
		void show ( void ) const;

		std::vector<int>::iterator begin ( void ) const;
		std::vector<int>::iterator end ( void ) const;

	private:
		// Add to pass vector mutable because of return of my begin() and end() func
		// Without mutable, cant return _vec.begin() because of const trait
		mutable std::vector<int> _vec;
		int	_index;
		int _max;
};

#endif
