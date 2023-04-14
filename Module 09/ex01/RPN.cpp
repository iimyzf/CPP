#include "RPN.hpp"

int RPN::calculate(const std::string &expr)
{
	std::istringstream iss(expr);
	char	token;

	if (expr.empty()) {
		std::cout << "Error" << std::endl;
		exit(1);
	}

	while (iss >> token)
	{
		try
		{
			bool	isOperator = (token == '+' || token == '-' || token == '*' || token == '/');
			bool	isOperand = (token >= '0' && token <= '9');
			if (!isOperator && !isOperand)
				throw std::runtime_error("Invalid token");
			if (isOperator)
			{
				try
				{
					if (_stack.size() < 2)
						throw std::runtime_error("Not enough operands on the stack");
					std::cout << "\nstack_top = " << _stack.top() << std::endl;
					int op2 = _stack.top();
					_stack.pop();
					int op1 = _stack.top();
					_stack.pop();

					std::cout << "\nop1 = " << op1 << "\nop2 = " << op2 << "\ntoken = " << token << std::endl;

					if (token == '+')
						_stack.push(op1 + op2);
					else if (token == '-')
						_stack.push(op1 - op2);
					else if (token == '*')
						_stack.push(op1 * op2);
					else if (token == '/')
					{
						if (op2 != 0)
							_stack.push(op1 / op2);
						else
							throw std::runtime_error("Division by zero");
					}
				}
				catch (std::exception &e)
				{
					std::cout << "Error" << std::endl;
					exit(1);
				}
			}
			else
			{
				int operand = token - 48;
				std::cout << "\noperand = " << operand << std::endl;
				_stack.push(operand);
			}
		}
		catch (std::exception &e)
		{
			std::cout << "Error" << std::endl;
			exit(1);
		}
	}
	return _stack.top();
}

RPN::RPN() {}

RPN::RPN(RPN const &other) { *this = other; }

RPN&	RPN::operator=(RPN const &other)
{
	if (this != &other)
		*this = other;
	return *this;
}

RPN::~RPN() {}