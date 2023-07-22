#include "easyfind.hpp"

int		main(void)
{
	std::vector<int> v;
	srand(time(NULL));
	for (int i = 0; i < 10; i++)
	{
		v.push_back(rand() % 20);
	}

	std::cout << "index:\t";
	for (int i = 0; i < 10; i++)
		std::cout << "\t" << i;
	std::cout << std::endl;

	std::cout << "------------------------------------------------------------------------------------------" << std::endl;

	std::cout << "iterator:";
	for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
		std::cout << "\t" << *it << " ";
	std::cout << std::endl;

	std::cout << "------------------------------------------------------------------------------------------" << std::endl;

	try
	{
		int	nemo = rand() % 20;
		std::cout << "finding: " << nemo << std::endl;
		std::cout << easyfind(v, nemo) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try
	{
		int	nemo = rand() % 20;
		std::cout << "finding: " << nemo << std::endl;
		std::cout << easyfind(v, nemo) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
