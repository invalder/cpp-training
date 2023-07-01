#ifndef __SHRUBBERYCREATIONFORM_HPP__
# define __SHRUBBERYCREATIONFORM_HPP__

# include <iostream>
# include <fstream>
# include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		const std::string	_target;

	public:
		ShrubberyCreationForm(const std::string&);
		ShrubberyCreationForm(const ShrubberyCreationForm&);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
		~ShrubberyCreationForm(void);

		void execute(Bureaucrat const & executor) const;
};

#endif
