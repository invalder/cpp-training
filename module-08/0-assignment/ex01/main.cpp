#include "Span.hpp"
#include <cstdlib>
#include <vector>

int		main(void)
{
	{
		std::cout << "10000 Numbers" << std::endl;
		try
		{
			const unsigned int N = 10000;
			const unsigned int M = 10000;

			Span sp1 = Span(N);
			srand(time(NULL));
			for (int i = 0; i < (int)M; i++)
				sp1.addNumber(rand() % 10000);
			// std::cout << sp1 << std::endl; // Uncomment this line to see the vector
			std::cout << sp1.shortestSpan() << std::endl;
			std::cout << sp1.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "5 Numbers" << std::endl;
		try
		{
			Span sp = Span(5);
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			std::cout << "Span " << sp << std::endl;
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl << "10 Random Numbers" << std::endl;
		try
		{
			Span sp2 = Span(10);
			std::vector<int> v;
			srand(time(NULL));
			for (int i = 0; i < 10; i++)
			{
				v.push_back(rand() % 100);
			}
			// std::cout << "begin: " << v.begin() << std::endl;

			sp2.addNumber(v.begin(), v.end());
			std::cout << "Span " << sp2 << std::endl;
			std::cout << sp2.shortestSpan() << std::endl;
			std::cout << sp2.longestSpan() << std::endl;
		}
		catch (std::exception &e)
		{
			std::cout << e.what() << std::endl;
		}
	}
	return (0);
}
