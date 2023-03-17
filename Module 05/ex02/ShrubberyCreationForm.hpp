/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:51:03 by yagnaou           #+#    #+#             */
/*   Updated: 2023/03/02 10:48:28 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
# define SHRUBBERY_CREATION_FORM_HPP

# include "AForm.hpp"

class	ShrubberyCreationForm : public AForm {
	private:
		std::string		_target;

	public:
		std::string		getTarget() const;
		void			beSigned(const Bureaucrat& bur);
		void			execute(Bureaucrat const & executor) const;

		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm& other);
		ShrubberyCreationForm&	operator=(const ShrubberyCreationForm& other);
		~ShrubberyCreationForm();
};

#endif