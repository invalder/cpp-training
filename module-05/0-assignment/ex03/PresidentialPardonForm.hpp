#ifndef __PRESIDENTIALPARDONFORM_HPP__
# define __PRESIDENTIALPARDONFORM_HPP__

# include <iostream>
# include <fstream>
# include <cstdlib>
# include <ctime>
# include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		const std::string	_target;

	public:
		PresidentialPardonForm(const std::string&);
		PresidentialPardonForm(const PresidentialPardonForm&);
		PresidentialPardonForm& operator=(const PresidentialPardonForm&);
		~PresidentialPardonForm(void);

		void execute(Bureaucrat const & executor) const;
};

#endif
