#ifndef RPN_HPP
# define RPN_HPP

#include <iostream>
#include <stack>
#include <sstream>
#include <cctype>

class RPN
{
private:
	/* data */
public:
	RPN(/* args */);
	~RPN();

	 double	evaluateRPNExpression(const std::string& expression);
	double	performOperation(double operand1, double operand2, const std::string& op);
	bool	isOperator(const std::string& token);
};


#endif
