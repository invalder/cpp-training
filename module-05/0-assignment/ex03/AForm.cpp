#include "AForm.hpp"

AForm::AForm(void) : _name("Default Form"), _isSigned(0), _gradeToSign(1), _gradeToExecute(1)
{
	// Default Constructor
	this->validator();
}

AForm::AForm(const std::string& name, const int& signGrade, const int& execGrade) : _name(name), _isSigned(0), _gradeToSign(signGrade), _gradeToExecute(execGrade)
{
	// Assign Construction
	this->validator();
}

AForm::AForm(AForm const & ref) : _name(ref._name), _isSigned(ref._isSigned), _gradeToSign(ref._gradeToSign), _gradeToExecute(ref._gradeToExecute)
{
	// Copy Construction
	*this = ref;
	this->validator();
}

AForm& AForm::operator=(AForm const & rhs)
{
	// Assign Operator
	if(this != &rhs)
	{
		// _gradeToSign = rhs._gradeToSign;
		this->validator();
	}
	return (*this);
}

AForm::~AForm(void)
{
	// Deconstruction
}

void	AForm::validator(void)
{
	if (this->getGradeToSign() < 1 || this->getGradeToExecute() < 1)
	{
		GradeTooLowException();
	}
	if (this->getGradeToSign() > 150 || this->getGradeToExecute() > 150)
	{
		GradeTooHighException();
	}
}

int		AForm::signValidator(const Bureaucrat & b)
{
	if (b.getGrade() > this->getGradeToSign())
	{
		return 1;
	}
	return 0;
}

void AForm::beSigned(const Bureaucrat & b)
{
	if (this->getStatus())
        throw AForm::AFormSigned();
	if (!this->signValidator(b))
	{
		_isSigned = 1;
	}
	else
	{
		throw AForm::GradeTooLowException();
	}
}

std::string	AForm::getName(void) const
{
	return _name;
}

bool	AForm::getStatus(void) const
{
	return	_isSigned;
}

std::string	AForm::getStatusStr(void) const
{
	return	_isSigned?"Signed":"Not Signed";
}

int	AForm::getGradeToSign(void) const
{
	return _gradeToSign;
}

int	AForm::getGradeToExecute(void) const
{
	return _gradeToExecute;
}

const char* AForm::AFormSigned::what(void) const throw()
{
	return "Form was already signed";
}

const char* AForm::AFormNotSigned::what(void) const throw()
{
	return "Form was not signed";
}

const char* AForm::GradeTooHighException::what(void) const throw()
{
	return "Grade Too High, are you a cheater!!";
}

const char* AForm::GradeTooLowException::what(void) const throw()
{
	return "Grade Too Low, we will check the paper again!!";
}

const char* AForm::AFormInvalid::what(void) const throw()
{
	return "Invalid Form!!!!";
}

std::ostream& operator<<(std::ostream& stream, const AForm& f)
{
    stream << "Form Name      : " << f.getName() << std::endl;
    stream << "Sign status    : " << f.getStatusStr() << std::endl;
    stream << "Required Grade : " << f.getGradeToSign() << std::endl;
    stream << "Execute Grade  : " << f.getGradeToExecute();
    return (stream);
}
