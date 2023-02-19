#include <iostream>

class Vector
{
	float x, y, z;

	public:
		Vector();
		~Vector();
};

Vector::Vector()
{
	this->x = 0;
	this->y = 0;
	this->z = 0;
	std::cout << "Construct Vector" << std::endl;
}

Vector::~Vector()
{
	std::cout << "Deconstruct Vector" << std::endl;
}

int main()
{
	//allocate on the stack
	int value = 5;
	int array[5];
	Vector vector;

	(void) vector;
	(void) value;
	(void) array;
	// allocate on the heap
	int* hvalue = new int;
	*hvalue = 5;
	int* harray = new int[5];
	Vector* hvector = new Vector();

	// need to delete() all the new() allocation
	delete hvalue;
	delete[] harray;
	delete hvector;
}
