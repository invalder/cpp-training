#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <iterator>
# include <algorithm>

class HardToFind : public std::exception
{
	const char* what(void) const throw()
	{
		return "Not Found";
	}
};

# include "easyfind.tpp"
#endif
