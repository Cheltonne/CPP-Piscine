/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:35 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 00:37:15 by chajax           ###   ########.fr       */
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
		PresidentialPardonForm(void);
		PresidentialPardonForm(PresidentialPardonForm &copy);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &rhs);
	public:
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm(void);
		void	action(void) const;
};
	std::ostream	&operator<<(std::ostream &o, PresidentialPardonForm const &rhs);
#endif
