#include "Span.hpp"

/* ====================================================
 *                                                    |
 *              CONSTRUCTOR / DESTRUCTOR              |
 *                                                    |
 * ====================================================
 */


Span::Span ( void ): _vec(0), _index(0), _max(0) {}

Span::Span ( unsigned int N ): _vec(N), _index(0), _max((int)N) {}

Span::~Span ( void ) { }

Span::Span ( const Span &copy ): _vec(copy.getVec()), _index(copy.getIndex()), _max(copy.getMax()) {}


/* ====================================================
 *                                                    |
 *                      OPERATOR                      |
 *                                                    |
 * ====================================================
 */


Span &Span::operator = ( const Span &right ) 
{
	if (&right == this)
		return (*this);
	_index = right.getIndex();
	_max = right.getMax();
	_vec = right.getVec();
	return (*this);
}


/* ====================================================
 *                                                    |
 *                    GETTER / SETTER                 |
 *                                                    |
 * ====================================================
 */


std::vector<int> Span::getVec ( void ) const {
	return (this->_vec);
}

int Span::getIndex ( void ) const {
	return (this->_index);
}

int Span::getMax ( void ) const {
	return (this->_max);
}


/* ====================================================
 *                                                    |
 *                      FUNCTIONS                     |
 *                                                    |
 * ====================================================
 */


void Span::addNumber ( int nb ) 
{
	if (_index >= _max) {
		throw std::invalid_argument("InvalidArgumentException : number can't be added. Span is full.");
		return ;
	}
	_vec[_index++] = nb;
}

int Span::longestSpan ( void ) const 
{
	std::vector<int> tmp = _vec;

	std::sort(tmp.begin(), tmp.end());
	return (tmp.back() - tmp.front());
}

int Span::shortestSpan ( void ) const 
{
	std::vector<int> tmp = _vec;

	std::sort(tmp.begin(), tmp.end()); 					//Sort tmp vector

	int diff = std::numeric_limits<int>::max(); 		//Set diff to int_max
	for (unsigned long i = 0; i < tmp.size(); i++)		//Unsigned long because of size() return
	{													//Try every diff starting by firsts elements and keep the smallest
		if (i + 1 < tmp.size())
		{
			int tmpDiff = tmp[i + 1] - tmp[i];
			if (tmpDiff < diff)
				diff = tmpDiff;
		}
	}
	return (diff);
}

void Span::insert(std::vector<int>::iterator &pos, int count, int value) 
{
	if (pos >= end() || pos < begin())
		throw std::out_of_range("OutOfRangeException : Position is out of range !");
	if (count > (std::vector<int>::iterator)_vec.end() - pos)
		throw std::out_of_range("OutOfRangeException : Can't add those datas. Container size is not enough.");
	
	// Use a copy iterator to know where we have to stop using it and count
	for (std::vector<int>::iterator it = pos; it < pos + count; it++) {
		*it = value;
	}
}

std::vector<int>::iterator Span::begin ( void ) const {
	return _vec.begin();
}

std::vector<int>::iterator Span::end ( void ) const {
	return _vec.end();
}

void Span::show ( void ) const
{
	std::vector<int> tmp = _vec;
	std::vector<int>::iterator begin = tmp.begin();
	std::vector<int>::iterator end = tmp.end();

	for (std::vector<int>::iterator start = begin; start < end; start++) {
		std::cout << *start << " ";
	}
	std::cout << std::endl;
}
