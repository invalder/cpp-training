#ifndef __ROBOTOMYREQUESTFORM_HPP__
# define __ROBOTOMYREQUESTFORM_HPP__

# include <iostream>
# include <fstream>
# include <cstdlib>
# include <ctime>
# include "AForm.hpp"

class RobotomyRequestForm: public AForm
{
	private:
		const std::string	_target;

	public:
		RobotomyRequestForm(const std::string&);
		RobotomyRequestForm(const RobotomyRequestForm&);
		RobotomyRequestForm& operator=(const RobotomyRequestForm&);
		~RobotomyRequestForm(void);

		void execute(Bureaucrat const & executor) const;
};

#endif
