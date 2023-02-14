#include <iostream>
#include "test.hpp"

int	main(void)
{
	phonebook	*pb;

	pb = nullptr;
	pb = new phonebook;
	// // // m1.contacts = new contact[5];

	// // pb->contacts[0].setname((char *)"contacts 1");
	// // pb->contacts[1].setname((char *)"contacts 2");
	// // pb->contacts[2].setname((char *)"contacts 3");
	// // pb->contacts[3].setname((char *)"contacts 4");
	// // pb->contacts[4].setname((char *)"contacts 5");

	// // std::cout << "Mother Shout: " << pb->contacts[0].getname() << std::endl;
	// // std::cout << "Mother Shout: " << pb->contacts[1].getname() << std::endl;
	// // std::cout << "Mother Shout: " << pb->contacts[2].getname() << std::endl;
	// // std::cout << "Mother Shout: " << pb->contacts[3].getname() << std::endl;
	// // std::cout << "Mother Shout: " << pb->contacts[4].getname() << std::endl;

	// // delete[] m1.contacts;
	delete pb;
	pb = nullptr;
	return (0);
}
