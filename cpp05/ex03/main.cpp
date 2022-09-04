/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:47:05 by chajax            #+#    #+#             */
/*   Updated: 2022/09/04 11:16:33 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Intern.hpp"
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
	Form 						*ptr;

	{
		std::cout << KYEL << "\n     -| INTERN TESTS |-\n\n" << KWHT;
		Intern	in;

		try
		{
			ptr = in.makeForm("shrubbery creation", "wrong_input");
	
		}
		catch (Intern::InvalidFormException e)
		{
			std::cout << "The intern couldn't create the form because: " << e.what() << '\n';
		}
		delete	ptr;
		std::cout << KYEL << "                            NEXT TEST\n" << KWHT;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		try
		{
			ptr = in.makeForm("robotomy request", "wrong_input");
		}
		catch (Intern::InvalidFormException e)
		{
			std::cout << "The intern couldn't create the form because: " << e.what() << '\n';
		}
		delete	ptr;
		std::cout << KYEL << "                            NEXT TEST\n" << KWHT;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		try
		{
			ptr = in.makeForm("presidential pardon", "wrong_input");
		}
		catch (Intern::InvalidFormException e)
		{
			std::cout << "The intern couldn't create the form because: " << e.what() << '\n';
			delete	ptr;
		}
		yoasobi.signForm(*ptr);
		yoasobi.executeForm(*ptr);
		delete	ptr;
		std::cout << KYEL << "                            NEXT TEST\n" << KWHT;
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		try
		{
			ptr = in.makeForm("wrong input", "wrong_input");
		}
		catch (Intern::InvalidFormException e)
		{
			std::cout << "The intern couldn't create the form because: " << e.what() << '\n';
		}
	}
}

