#ifndef	RPN_HPP
# define RPN_HPP

# include <string>
# include <stack>
# include <iostream>
# include <sstream>

class RPN {
	private:
		std::stack<int>  _stack;

	public:
		int		calculate(const std::string &expr);

	RPN();
	RPN(RPN const &other);
	RPN &operator=(RPN const &other);
	~RPN();
};


#endif