#include <iostream>
#include <stdlib.h>
#include <string.h>

int main()
{
	// allocate 8 chars
	// point the pointer buffer to the beginning of the array
	char* buffer = new char[8];
	memset(buffer, 0, 8);

	// pointer to pointer
	char** ptr = &buffer;

	(void) ptr;
	delete[] buffer;
	return (0);
}
