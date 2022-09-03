/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:47:05 by chajax            #+#    #+#             */
/*   Updated: 2022/09/04 00:33:29 by chajax           ###   ########.fr       */
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

	{
		std::cout << KYEL << "\n     -| INTERN TESTS |-\n\n" << KWHT;
		Intern	in;

		try
		{
			in.makeForm("shrubbery creation", "wrong_input");
		}
		catch (Intern::InvalidFormException e)
		{
			std::cout << "The intern couldn't create the form because: " << e.what() << '\n';
		}
	}
}
