/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:47:05 by chajax            #+#    #+#             */
/*   Updated: 2022/09/03 18:18:42 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	yoasobi("Lilas Ikuta", 2);
	Form		f("Tony of the Golden Order", 2, 6);
	Form		*wrong_form;

	std::cout << f;
	try
	{
		std::cout << "Trying to set " << yoasobi.getName() << "'s rank to 0...\n";
		yoasobi.setGrade(0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << "Trying to set the rank to 0...\n";
		yoasobi.setGrade(151);
	}
	catch (Bureaucrat::GradeTooLowException)
	{
		std::cout << "The chosen rank was too low. Aborting operation...\n";
	}
	yoasobi.setGrade(42);
	std::cout << yoasobi;
	try
	{
		yoasobi.demote();
		std::cout << yoasobi;
		yoasobi.setGrade(1);
		std::cout << yoasobi;
		yoasobi.promote();
		std::cout << "This is a post exception-throw instruction. " << yoasobi;
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what();
	}
	try
	{
		yoasobi.setGrade(150);
		std::cout << yoasobi;
		yoasobi.demote();
		std::cout << "This is a post exception-throw instruction. " << yoasobi;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what();
	}
	try
	{
		std::cout << "Trying to create a form with rank that is too high...\n";
		wrong_form = new Form("w", 0, 0);
		std::cout << wrong_form;
	}
	catch (Form::GradeTooHighException e)
	{
		std::cout << "Couldn't create form because: " << e.what();
		delete wrong_form;
	}
}
