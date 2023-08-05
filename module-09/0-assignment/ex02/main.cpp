#include "PmergeMe.hpp"

int	main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	try
	{
		PmergeMe<std::vector<int> >	mergeTest(argc, argv);

		mergeTest.sortAndTime(100);
		mergeTest.printResults();
	}
	catch (const InputException& e) {
		std::cerr << "Exception: " << e.getMessage() << std::endl;
		return 1;
	}
	return (0);
}
