#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name("Mr. Nobody"), _grade(150)
{
	// Default Constructor
}

Bureaucrat::Bureaucrat(const std::string& name, const int& grade) : _name(name)
{
	// Assign Construction
	this->setGrade(grade);
}

Bureaucrat::Bureaucrat(Bureaucrat const & ref) : _name(ref._name), _grade(ref._grade)
{
	// Copy Construction
	*this = ref;
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat const & rhs)
{
	if(this != &rhs)
	{
		_grade = rhs._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	// Deconstruction
}

std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

void Bureaucrat::setGrade(const int& grade)
{
	if (grade < 1 || grade > 150)
	{
		if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
	}
	this->_grade = grade;
}

void Bureaucrat::gradeIncrement(void)
{
	this->setGrade(_grade - 1);
}

void Bureaucrat::gradeDecrement(void)
{
	this->setGrade(_grade + 1);
}

const char* Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return "Grade Too High, are you a cheater!!";
}

const char* Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return "Grade Too Low, we will check the paper again!!";
}

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& b)
{
    stream << b.getName() << ", bureaucrat grade " << b.getGrade();
    return (stream);
}
