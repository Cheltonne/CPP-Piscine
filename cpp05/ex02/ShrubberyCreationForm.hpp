/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:35 by chajax            #+#    #+#             */
/*   Updated: 2022/09/03 22:18:00 by chajax           ###   ########.fr       */
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
		bool				_is_signed = false;
		const int			_exec_rank = 137;
		const int			_sign_rank = 145;
		ShruberryCreationForm(void);
		ShruberryCreationForm(ShruberryCreationForm &copy);
		ShruberryCreationForm &operator=(const ShruberryCreationForm &rhs);
	public:
		ShruberryCreationForm(std::string target);
		~ShruberryCreationForm(void);
		void	craft_tree(std::string target) const;
		void	execute(Bureaucrat const &executor) const;
		class	ExecException: public std::exception
		{
				public:
					virtual const char *what() const throw()
					{
						return ("Couldn't execute the form. Exec rank is too low.\n");
					}
		};
};
	std::ostream	&operator<<(std::ostream &o, ShruberryCreationForm const &rhs);
#endif
