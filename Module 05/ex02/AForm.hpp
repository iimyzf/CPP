/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 18:16:29 by yagnaou           #+#    #+#             */
/*   Updated: 2023/02/28 20:48:18 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	AFORM_HPP
# define AFORM_HPP

# include "iostream"

class Bureaucrat;

class	AForm {
	protected:
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

		class	FormNotSigned : public std::exception {
			public:
				virtual const char*	what() const throw();
		};

		std::string		getName() const;
		bool			getIsSigned() const;
		int				getGrade() const;
		int				getExGrade() const;

		virtual void	beSigned(const Bureaucrat& bur) = 0;

		virtual void	execute(Bureaucrat const & executor) const = 0;

	AForm();
	AForm(const AForm& other);
	AForm&	operator=(const AForm& other);
	AForm(std::string name, int grade, int exGrade);
	~AForm();
};

std::ostream&	operator<<(std::ostream& stream, const AForm& AForm);

#endif