/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:35 by chajax            #+#    #+#             */
/*   Updated: 2022/09/03 23:42:57 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include <iostream>
# include "Bureaucrat.hpp"
# include "Form.hpp"

class Bureaucrat;

class PresidentialPardonForm: public Form
{
	private:
		std::string			_target;
		bool				_is_signed = false;
		const int			_exec_rank = 137;
		const int			_sign_rank = 145;
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm &copy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);
		void	pardon(void) const;
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
	std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &rhs);
#endif
