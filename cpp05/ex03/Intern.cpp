/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 00:09:30 by chajax            #+#    #+#             */
/*   Updated: 2022/09/04 00:34:28 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor called.\n";
}

Intern::Intern(Intern &copy)
{
    std::cout << "Intern copy constructor called.\n";
    *this = copy;
}

Intern::~Intern()
{
    std::cout << "Intern destructor called.\n";
}

Intern &Intern::operator=(Intern const &rhs)
{
	std::cout << "Copy assignement operator called.\n";
	(void)rhs;
    return (*this);
}

static Form *new_Robotomy(std::string target)
{
    Form *Robotomy = new RobotomyRequestForm(target);
    return (Robotomy);
}

static Form *new_President(std::string target)
{
    Form *President = new PresidentialPardonForm(target);
    return (President);
}

static Form *new_Shrub(std::string target)
{
    Form *Shrub = new ShruberryCreationForm(target);
    return (Shrub);
}

Form *Intern::makeForm(const std::string form, const std::string target)
{
	Form	*(*fct[3])(std::string target) =
	{
		new_Shrub,
		new_Robotomy,
		new_President
	};
	std::string	Names[3] =
	{
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};
	Form	*ret = NULL;

	for (int i = 0; i < 3; i++)
	{
		if (Names[i] == form)
		{
			ret = fct[i](target);
			std::cout << "Intern creates " << Names[i] << '\n';
		}
	}
	if (!ret)
		throw (InvalidFormException());
	return (ret);
}
