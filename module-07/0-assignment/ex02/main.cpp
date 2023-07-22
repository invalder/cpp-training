#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
	std::cout << std::endl;

    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 748;
		std::cout << "check for numbers[-2] = 748\twhich is " << numbers[-2] << '\n';
		std::cout << "check for numbers[748] = 748\twhich is " << numbers[748] << '\n';
		std::cout << "check for address of numbers[-2] = 748\twhich is " << &numbers[-2] << '\n';
		std::cout << "check for address of numbers[748] = 748\twhich is " << &numbers[748] << '\n';
    }
    catch(const std::exception& e)
    {
        std::cerr << "minus exception" << '\n';
		std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << "max value exception" << '\n';
		std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
