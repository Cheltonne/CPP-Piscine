/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:47:05 by chajax            #+#    #+#             */
/*   Updated: 2022/08/31 16:25:27 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	yoasobi("Lilas Ikura", 2);

	try
	{
		std::cout << "Trying to set the rank to 0...\n";
		yoasobi.setGrade(0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << '\n';
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
}
