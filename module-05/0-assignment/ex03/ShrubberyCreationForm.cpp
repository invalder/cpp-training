#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target): AForm("ShrubberyCreationForm", 145, 137), _target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& ref): AForm("ShrubberyCreationForm", 145, 137), _target(ref._target)
{
	*this = ref;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	(void)rhs;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getGradeToExecute())
	{
		throw Bureaucrat::GradeTooLowException();
	}
	if (!this->getStatus())
	{
		throw AForm::AFormNotSigned();
	}

	std::ofstream outfile;

	outfile.open(std::string(this->_target + "_shrubbery").c_str());
	if (!outfile.is_open())
		return ;

	int treeHeight = 10; // Adjust the tree height as desired

	// Loop for each row
	for (int i = 0; i < treeHeight; i++) {
		// Calculate the number of spaces and branches for each row
		int spaces = treeHeight - i;
		int branches = 2 * i + 1;

		// Print spaces before the branches
		for (int j = 0; j < spaces; j++) {
			outfile << " ";
		}

		// Print branches
		for (int j = 0; j < branches; j++) {
			outfile << "*";
		}

		outfile << std::endl;
	}

	// Print trunk
	int trunkHeight = std::max(1, treeHeight / 3); // Adjust the trunk height as desired
	for (int i = 0; i < trunkHeight; i++) {
		for (int j = 0; j < treeHeight - 1; j++) {
			outfile << " ";
		}
		outfile << "|" << std::endl;
	}

	outfile.close();

}
