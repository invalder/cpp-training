#ifndef __FORM_HPP__
# define __FORM_HPP__

# include <iostream>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		Form(void);
		Form(const std::string&, const int&, const int&);
		Form(const Form& c);
		Form& operator=(const Form& c);
		~Form(void);

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
		class FormSigned: public std::exception
		{
			const char* what(void) const throw();
		};

};

std::ostream& operator<<(std::ostream& stream, const Form& f);

#endif
