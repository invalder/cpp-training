#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <ostream>

class Span
{
private:
	unsigned int		_n;
	std::vector<int>	_data;
public:
	Span(void);
	Span(unsigned int n);
	Span(const Span &src);
	Span &operator=(const Span &rhs);
	int &operator[](const unsigned int i);
	~Span(void);

	void	addNumber(int num);
	void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
	int		shortestSpan(void) const;
	int		longestSpan(void) const;
	int		getSize(void) const;

	class SpanFullException : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return ("Span is Full!!!");
		}
	};

	class SpanNotEnoughException : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return ("Not Enough Number!!!");
		}
	};

	class IndexOutOfRangeException : public std::exception
	{
		public:
		const char* what() const throw()
		{
			return ("Index is out of Range!!!");
		}
	};
};

std::ostream &	operator<<(std::ostream & o, Span & rhs);

#endif
