/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:47:05 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 00:48:11 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#define KYEL  "\x1B[33m"
#define KWHT  "\x1B[37m"

int	main()
{
	Bureaucrat					b("Big Boss Man", 2);
	Bureaucrat					v("grosse victime", 150);

	{
		std::cout << KYEL << "\n     -| SHRUBERY MACHIN TRUC SCOPE |-\n\n" << KWHT;
		ShruberryCreationForm		f("jardin");
		ShruberryCreationForm		t("toilettes");
		try
		{
			b.executeForm(f);
			std::cout << '\n';
			b.signForm(f);
			b.signForm(f);
			b.signForm(t);
			v.signForm(t);
			std::cout << '\n';
			b.executeForm(f);
			v.executeForm(t);
			std::cout << '\n';
		}
		catch (Form::GradeTooLowException e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << KYEL << "\n     -| ROBOTOMIZE TRUC SCOPE |-\n\n" << KWHT;
		RobotomyRequestForm	f("User");
		try
		{
			b.signForm(f);
			b.signForm(f);
			std::cout << '\n';
			b.executeForm(f);
			std::cout << '\n';
		}
		catch (Form::GradeTooLowException e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << KYEL << "\n     -| PRESIDENTIAL PARDON SCOPE |-\n\n" << KWHT;
		PresidentialPardonForm	f("User");
		b.signForm(f);
		b.signForm(f);
		std::cout << '\n';
		b.executeForm(f);
		std::cout << '\n';
	}
}
