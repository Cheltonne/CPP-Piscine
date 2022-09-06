/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:47:05 by chajax            #+#    #+#             */
/*   Updated: 2022/09/05 23:22:11 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	yoasobi("Lilas Ikuta", 2);
	Bureaucrat	v("victime", 149);
	Form		f("Tony of the Golden Order", 2, 6);
	Form		*wrong_form;

	std::cout << "Testing the `<<` overload:\n\n" << f << '\n';

	try
	{
		std::cout << "Trying to create a form with a sign rank that is too high...\n";
		wrong_form = new Form("w", 0, 1);
		std::cout << wrong_form;
	}
	catch (Form::GradeTooHighException e)
	{
		std::cout << "Couldn't create form because: " << e.what() << '\n';
	}
	try
	{
		std::cout << "Trying to create a form with a sign rank that is too low...\n";
		wrong_form = new Form("w", 151, 1);
		std::cout << wrong_form;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << "Couldn't create form because: " << e.what() << '\n';
	}

	try
	{
		std::cout << "Trying to create a form with an exec rank that is too high...\n";
		wrong_form = new Form("w", 1, 0);
		std::cout << wrong_form;
	}
	catch (Form::GradeTooHighException e)
	{
		std::cout << "Couldn't create form because: " << e.what() << '\n';
	}
	try
	{
		std::cout << "Trying to create a form with an exec rank that is too low...\n";
		wrong_form = new Form("w", 1, 151);
		std::cout << wrong_form;
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << "Couldn't create form because: " << e.what() << '\n';
	}
	v.signForm(f);
	yoasobi.signForm(f);
	yoasobi.signForm(f);
}
