#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>

template< typename T >
class Array {

		public:
			Array<T> ( void ): _ptr(NULL), _size(0) {}
			Array<T> ( const unsigned int n ): _ptr(new T[n]), _size(n) {}
			Array<T> (const Array<T> &copy ): _ptr(NULL) { *this = copy; }
			~Array<T> ( void ) { delete[] _ptr; }


			Array<T> &operator=( const Array<T> &right ) { 
				if (&right == this)
					return (*this);
				delete[] _ptr;
				_ptr = new T[right.getSize()];
				_size = right.getSize();
				for (int i = 0; i < _size; i++) {
					_ptr[i] = right._ptr[i];
				}
				return (*this);
			}


			T &operator[] (const int index) {
				if (index >= _size || index < 0) {
					throw Array::WrongIndex();
				}
				return _ptr[index];
			}


			int getSize ( void ) const { return (this->_size); }

			void setContent ( const int i ) { this->_i = i; }

			class WrongIndex: public std::exception {
				virtual const char* what() const throw() {
					return ("WrongIndex : Index Out Of Bound");
				}
			};

		private:
			T 	*_ptr;
			int _size;
};

#endif
