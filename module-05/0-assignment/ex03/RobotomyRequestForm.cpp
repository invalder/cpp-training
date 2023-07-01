#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target): AForm("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& ref): AForm("RobotomyRequestForm", 72, 45), _target(ref._target)
{
	*this = ref;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	(void)rhs;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
	{
		throw Bureaucrat::GradeTooLowException();
	}
	if (!this->getStatus())
	{
		throw AForm::AFormNotSigned();
	}

	std::srand(std::time(nullptr)); // use current time as seed for random generator
    int random_action = std::rand() % 8;
	system("afplay ../easter_egg/drill2.mp3");

	if (random_action > 4)
	{
		// std::cout << "Drilling You!!!!" << std::endl;
		std::cout << _target << " has been robotomized " << std::endl;
		system("afplay ../easter_egg/robot.mp3");
	}
	else
	{
		std::cout << "Para truu!!!!" << std::endl;
		system("afplay ../easter_egg/minion.mp3");
	}

}
