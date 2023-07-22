#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
	private:
				T				*_array;
				unsigned int	_size;
	public:
				Array(void);
				Array(unsigned int n);
				Array(Array const &src);
				~Array(void);

				Array			&operator=(Array const &rhs);

				T				&operator[](int i) const;

				unsigned int	size(void) const;
};

# include "Array.tpp"

#endif
