#include "Span.hpp"

Span::Span(void) : _n(0), _data(std::vector<int>(0)) {
}

Span::Span(unsigned int n) : _n(n), _data(std::vector<int>(0)){
}

Span::Span(const Span &src)
{
	this->_data.clear();
	this->_data = src._data;
	this->_n = src._n;
}

Span& Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		this->_data.clear();
		this->_data = rhs._data;
		this->_n = rhs._n;
	}
	return (*this);
}

int& Span::operator[](const unsigned int i)
{
	if (i >= _n)
		throw Span::IndexOutOfRangeException();
	return (_data[i]);
}

Span::~Span(void)
{
	this->_data.clear();
	this->_n = 0;
}

void	Span::addNumber(int num)
{
	if (_data.size() == _n)
		throw Span::SpanFullException();
	_data.push_back(num);
}

void	Span::addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	int	totalNewNumbers = end - begin;
	if (_data.size() == _n || _data.size() + totalNewNumbers > _n)
	{
		throw Span::SpanFullException();
	}
	for (std::vector<int>::iterator it = begin; it != end; it++)
	{
		_data.push_back(*it);
	}
}

int	Span::shortestSpan(void) const {
	if (_data.size() <= 1)
		throw Span::SpanNotEnoughException();

	std::vector<int> sorted_data(this->_data);
	std::sort(sorted_data.begin(), sorted_data.end());
	int min_span = sorted_data[1] - sorted_data[0];
	for (unsigned int i = 2; i < sorted_data.size(); i++) {
		int current_span = sorted_data[i] - sorted_data[i - 1];
		if (current_span < min_span)
			min_span = current_span;
	}
	return min_span;
}

int	Span::longestSpan(void) const {
	if (_data.size() <= 1)
		throw Span::SpanNotEnoughException();

	std::vector<int> sorted_data(this->_data);
	std::sort(sorted_data.begin(), sorted_data.end());
	int max_span = sorted_data[sorted_data.size() - 1] - sorted_data[0];
	for (unsigned int i = 0; i < sorted_data.size() - 1; i++) {
		int current_span = sorted_data[sorted_data.size() - 1] - sorted_data[i];
		if (current_span > max_span) {
			max_span = current_span;
		}
	}
	return max_span;
}

int	Span::getSize(void) const
{
	return	(static_cast<int>(_data.size()));
}

std::ostream	&operator<<(std::ostream &o, Span &rhs)
{
	o << "Span: ";
	for (int i = 0; i < rhs.getSize(); i++)
		o << rhs[i] << " ";
	o << std::endl;
	return (o);
}
