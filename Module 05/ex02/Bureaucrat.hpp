/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:48:27 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/02 10:45:20 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "iostream"
# include "AForm.hpp"

class Bureaucrat {
	private:
	    std::string	const	_name;
	    int 				_grade;

	public:
	    class	GradeTooHighException : public std::exception {
	    	public:
	        	virtual const char* what() const throw();
	    	};

	    class	GradeTooLowException : public std::exception {
	    	public:
	        	virtual const char* what() const throw();
	    	};

	    std::string	getName() const;
	    int 		getGrade() const;

	    void 		incrementGrade();
	    void 		decrementGrade();
		
		void		signForm(AForm& form);

		void		executeForm(AForm const & form);

	Bureaucrat();
	Bureaucrat(const Bureaucrat& other);
	Bureaucrat&	operator=(const Bureaucrat& other);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat();
};

std::ostream&	operator<<(const std::ostream& stream, const Bureaucrat& bur);

#endif