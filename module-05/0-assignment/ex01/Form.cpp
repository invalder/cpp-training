#include "Form.hpp"

Form::Form(void) : _name("Default Form"), _isSigned(0), _gradeToSign(1), _gradeToExecute(1)
{
	// Default Constructor
	this->validator();
}

Form::Form(const std::string& name, const int& signGrade, const int& execGrade) : _name(name), _isSigned(0), _gradeToSign(signGrade), _gradeToExecute(execGrade)
{
	// Assign Construction
	this->validator();
}

Form::Form(Form const & ref) : _name(ref._name), _isSigned(ref._isSigned), _gradeToSign(ref._gradeToSign), _gradeToExecute(ref._gradeToExecute)
{
	// Copy Construction
	*this = ref;
}

Form& Form::operator=(Form const & rhs)
{
	// Assign Operator
	if(this != &rhs)
	{
		// _gradeToSign = rhs._gradeToSign;
		this->validator();
	}
	return (*this);
}

Form::~Form(void)
{
	// Deconstruction
}

void	Form::validator(void)
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

int		Form::signValidator(const Bureaucrat & b)
{
	if (b.getGrade() > this->getGradeToSign())
	{
		return 1;
	}
	return 0;
}

void Form::beSigned(const Bureaucrat & b)
{
	if (this->getStatus())
        throw Form::FormSigned();
	if (!this->signValidator(b))
	{
		_isSigned = 1;
	}
	else
	{
		throw Form::GradeTooLowException();
	}
}

std::string	Form::getName(void) const
{
	return _name;
}

bool	Form::getStatus(void) const
{
	return	_isSigned;
}

std::string	Form::getStatusStr(void) const
{
	return	_isSigned?"Signed":"Not Signed";
}

int	Form::getGradeToSign(void) const
{
	return _gradeToSign;
}

int	Form::getGradeToExecute(void) const
{
	return _gradeToExecute;
}

const char* Form::FormSigned::what(void) const throw()
{
	return "Form was already signed";
}

const char* Form::GradeTooHighException::what(void) const throw()
{
	return "Grade Too High, are you a cheater!!";
}

const char* Form::GradeTooLowException::what(void) const throw()
{
	return "Grade Too Low, we will check the paper again!!";
}

std::ostream& operator<<(std::ostream& stream, const Form& f)
{
    stream << "Form Name      : " << f.getName() << std::endl;
    stream << "Sign status    : " << f.getStatusStr() << std::endl;
    stream << "Required Grade : " << f.getGradeToSign() << std::endl;
    stream << "Execute Grade  : " << f.getGradeToExecute();
    return (stream);
}
