#include <iostream>

int	main()
{
	int		numberOfBalls = 42;

	int*	ballsPtr = &numberOfBalls;
	int&	ballsRef = numberOfBalls;
	// the reference will be pointing to the variable
	// from this point on, you can't change what your reference is pointing to

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	std::cout << ballsPtr << std::endl;
	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	(ballsPtr)++;
	std::cout << ballsPtr << std::endl;
	(*ballsPtr)++;
	std::cout << ballsPtr << std::endl;
	std::cout << *ballsPtr << std::endl;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << ballsRef << std::endl;
	ballsRef++;
	std::cout << ballsRef << std::endl;
	std::cout << numberOfBalls << std::endl;

	return (0);
}
