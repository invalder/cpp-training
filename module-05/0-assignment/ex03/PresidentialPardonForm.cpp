#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target): AForm("PresidentialPardonForm", 72, 45), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& ref): AForm("PresidentialPardonForm", 72, 45), _target(ref._target)
{
	*this = ref;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	(void)rhs;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	// if (executor.getGrade() > this->getGradeToExecute())
	// {
	// 	throw Bureaucrat::GradeTooLowException();
	// }
	// if (!this->getStatus())
	// {
	// 	throw AForm::AFormNotSigned();
	// }
	if (this->beExecute(executor))
	{
		system("afplay ../easter_egg/Zaphod_Beeblebrox.mp3");
		std::cout << this->_target << " has been pardoned by Zabphod Beeblebrox" << std::endl;
	}

	// system("afplay ../easter_egg/Zaphod_Beeblebrox.mp3");
	// std::cout << this->_target << " has been pardoned by Zabphod Beeblebrox" << std::endl;
}
