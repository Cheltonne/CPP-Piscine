/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:47:05 by chajax            #+#    #+#             */
/*   Updated: 2022/09/04 00:22:24 by chajax           ###   ########.fr       */
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
	Bureaucrat					yoasobi("Lilas Ikuta", 2);
	Bureaucrat					v("victime", 150);

	{
		std::cout << KYEL << "\n     -| SHRUBERY MACHIN TRUC SCOPE |-\n\n" << KWHT;
		ShruberryCreationForm		f("jardin");
		ShruberryCreationForm		t("toilettes");
		try
		{
			yoasobi.signForm(f);
			yoasobi.signForm(f);
			v.signForm(t);
			yoasobi.signForm(t);
			f.execute(yoasobi);
			t.execute(v);
		}
		catch (ShruberryCreationForm::ExecException e)
		{
			std::cout << e.what();
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
			yoasobi.signForm(f);
			yoasobi.signForm(f);
			f.execute(yoasobi);
		}
		catch (RobotomyRequestForm::ExecException e)
		{
			std::cout << e.what();
		}
		catch (Form::GradeTooLowException e)
		{
			std::cout << e.what();
		}
	}
	{
		std::cout << KYEL << "\n     -| PRESIDENTIAL PARDON SCOPE |-\n\n" << KWHT;
		PresidentialPardonForm	f("User");
		yoasobi.signForm(f);
		yoasobi.signForm(f);
		f.execute(yoasobi);
		v.executeForm(f);
	}
}
