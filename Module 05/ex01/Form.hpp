/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:16:29 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/02 10:36:53 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FORM_HPP
# define FORM_HPP

# include "iostream"

class Bureaucrat;

class	Form {
	private:
		std::string	const	_name;
		bool				_isSigned;
		int	const			_grade;
		int	const			_exGrade;

	public:
		class	GradeTooHighException : public std::exception {
			public:
				virtual	const char*	what() const throw();
		};
		
		class	GradeTooLowException : public std::exception {
			public:
				virtual const char*	what() const throw();
		};
		
		std::string		getName() const;
		bool			getIsSigned() const;
		int				getGrade() const;
		int				getExGrade() const;
		
		void			beSigned(const Bureaucrat& bur);

	Form();
	Form(const Form& other);
	Form&	operator=(const Form& other);
	Form(std::string name, int grade, int exGrade);
	~Form();
};

std::ostream&	operator<<(std::ostream& stream, const Form& form);

#endif