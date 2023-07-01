#ifndef __INTERN_HPP__
#define __INTERN_HPP__

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{

	public:
		Intern(void);
		Intern(const Intern& c);
		Intern& operator=(const Intern& c);
		~Intern(void);

		AForm* makeForm(const std::string& name, const std::string& target);

};

#endif
