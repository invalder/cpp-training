#include <iostream>
#include "test.hpp"

contact::contact()
{
	(void) this->name;
	std::memset(this->name, 0, sizeof(this->name));
	std::cout << "Construction Completed" << std::endl;
	return ;
}

contact::~contact()
{
	std::cout << "Decon " << this->name << std::endl;
	std::cout << "On Hold, Cancel" << std::endl;
	return ;
}

int	contact::setname(char *str)
{
	std::strcpy(this->name, str);
	return (0);
}

char	*contact::getname(void) const
{
	return ((char *)this->name);
}

phonebook::phonebook()
{
	std::cout << "Mother Construction" << std::endl;
	this->contacts = 0;
	this->contacts = new contact[5];
	std::cout << "Mother Construction Completed" << std::endl;
	return ;
}

phonebook::~phonebook()
{
	std::cout << "Mother On Hold, Cancel" << std::endl;
	delete[] this->contacts;
	this->contacts = 0;
	return ;
}
