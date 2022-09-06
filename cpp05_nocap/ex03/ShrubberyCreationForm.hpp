/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:35 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 00:33:16 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBERRYCREATIONFORM_HPP
# define SHRUBERRYCREATIONFORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class ShruberryCreationForm: public Form
{
	private:
		std::string			_target;
		ShruberryCreationForm(void);
		ShruberryCreationForm(ShruberryCreationForm &copy);
		ShruberryCreationForm &operator=(const ShruberryCreationForm &rhs);
	public:
		ShruberryCreationForm(std::string target);
		~ShruberryCreationForm(void);
		void	action(void) const;
};
	std::ostream	&operator<<(std::ostream &o, ShruberryCreationForm const &rhs);
#endif
