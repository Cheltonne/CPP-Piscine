/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 00:09:22 by chajax            #+#    #+#             */
/*   Updated: 2022/09/04 00:33:09 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "Form.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
public:
    Intern(void);
    Intern(Intern &copy);
    ~Intern();
	Intern &operator=(Intern const &rhs);
    Form *makeForm(const std::string name, const std::string target);

    class InvalidFormException : public std::exception
	{
	public:
		const char* what() const throw()
		{
			return ("invalid form type");
		}
	};
};
#endif
