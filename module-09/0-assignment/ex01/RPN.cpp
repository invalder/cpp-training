#include "RPN.hpp"

RPN::RPN()
{
}

RPN::~RPN()
{
}

bool RPN::isOperator(const std::string& token)
{
	return (token == "+" || token == "-" || token == "*" || token == "/");
}

double RPN::performOperation(double operand1, double operand2, const std::string& op)
{
	if (op == "+")
		return operand1 + operand2;
	else if (op == "-")
		return operand1 - operand2;
	else if (op == "*")
		return operand1 * operand2;
	else if (op == "/")
		return operand1 / operand2;
	else
		throw std::invalid_argument("Invalid operator: " + op);
}

double RPN::evaluateRPNExpression(const std::string& expression)
{
	std::stack<double> operands;
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token) {
		if (std::isdigit(token[0])) {
			double operand;
			std::istringstream(token) >> operand;
			if (operand >= 10)
				throw std::invalid_argument("Invalid Operand: " + expression);
			operands.push(operand);
		} else if (isOperator(token)) {
			if (operands.size() < 2) {
				throw std::invalid_argument("Invalid RPN expression: " + expression);
			}
			double operand2 = operands.top();
			operands.pop();
			double operand1 = operands.top();
			operands.pop();
			double result = performOperation(operand1, operand2, token);
			operands.push(result);
		} else {
			throw std::invalid_argument("Invalid token: " + token);
		}
	}

	if (operands.size() != 1) {
		throw std::invalid_argument("Invalid RPN expression: " + expression);
	}

	return operands.top();
}
