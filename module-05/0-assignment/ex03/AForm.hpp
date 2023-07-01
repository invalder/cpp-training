#ifndef __AFORM_HPP__
# define __AFORM_HPP__

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		AForm(void);
		AForm(const std::string&, const int&, const int&);
		AForm(const AForm& c);
		AForm& operator=(const AForm& c);
		virtual ~AForm(void);

		std::string	getName(void) const;
		bool		getStatus(void) const;
		std::string	getStatusStr(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;

		void		validator(void);
		int			signValidator(const Bureaucrat &);

		void		beSigned(const Bureaucrat &);

		class GradeTooHighException: public std::exception
		{
			const char* what(void) const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char* what(void) const throw();
		};
		class AFormSigned: public std::exception
		{
			const char* what(void) const throw();
		};
		class AFormNotSigned: public std::exception
		{
			const char* what(void) const throw();
		};
		class AFormInvalid: public std::exception
		{
			const char* what(void) const throw();
		};

		virtual void execute(Bureaucrat const & executor) const = 0;

};

std::ostream& operator<<(std::ostream& stream, const AForm& f);

#endif

// change the name to AForm
// All attribute remain private and in the base class
// add the execute(Bureaucrat const & executor) const member function to the base form
// You have to check that the form is signed and that the grade of the bureaucrat
// attempting to execute the form is high enough. Otherwise, throw an appropriate exception.
