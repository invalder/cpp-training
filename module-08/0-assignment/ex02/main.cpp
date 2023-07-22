#include "MutantStack.hpp"

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << "Top: " << mstack.top() << std::endl;
	mstack.pop();
	std::cout << "Current Size: " << mstack.size() << std::endl;
	std::cout << "Top: " << mstack.top() << std::endl;

	mstack.push(3);
	std::cout << "Adding 3, Top: " << mstack.top() << std::endl;

	mstack.push(5);
	std::cout << "Adding 5, Top: " << mstack.top() << std::endl;

	mstack.push(737);
	std::cout << "Adding 737, Top: " << mstack.top() << std::endl;
	//[...]
	mstack.push(0);
	std::cout << "Adding 0, Top: " << mstack.top() << std::endl;


	std::cout << "--------------------" << std::endl;
	std::cout << "Print mstack from begin" << std::endl;
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	return 0;
}
