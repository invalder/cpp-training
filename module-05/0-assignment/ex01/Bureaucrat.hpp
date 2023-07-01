#ifndef __BUREAUCRAT_HPP__
# define __BUREAUCRAT_HPP__

# include <iostream>
# include "Form.hpp"

class Form;

class Bureaucrat
{

	private:
		const std::string	_name;
		int					_grade;

	public:
		Bureaucrat(void);
		Bureaucrat(const std::string&, const int&);
		Bureaucrat(const Bureaucrat& c);
		Bureaucrat& operator=(const Bureaucrat& c);
		~Bureaucrat(void);

		std::string getName(void) const;
		int getGrade(void) const;

		void setGrade(const int&);

		void gradeIncrement(void);
		void gradeDecrement(void);

		void signForm(Form& f);

		class GradeTooHighException: public std::exception
		{
			const char* what(void) const throw();
		};
		class GradeTooLowException: public std::exception
		{
			const char* what(void) const throw();
		};
};

// static std::string	_errGradeTooHigh = "Grade Too High, are you a cheater!!";
// static std::string	_errGradeTooLow = "Grade Too Low, we will check the paper again!!";

std::ostream& operator<<(std::ostream& stream, const Bureaucrat& b);

// must have constant name

// a grade that range from 1 to 150
// the highest grade is 1, on the other hand 150 is lowest

// when try to instantiate invalid grade throw error
// Bureaucrat::GradeTooHighException or Bureaucrat::GradeTooLowException

// provide getName() and getGrade() attribute
// implement 2 function, increament and decrement grade
// when grade increase mean 3 -> 2
// if out or range, throw same exception as the constructor

// using try catch block

// implement overlod << to print something like example.

#endif
