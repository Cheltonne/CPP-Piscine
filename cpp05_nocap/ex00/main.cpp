/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:47:05 by chajax            #+#    #+#             */
/*   Updated: 2022/09/05 23:01:09 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat	b("Big Boss Man", 2);

	try
	{
		std::cout << "Trying to create a bureaucrat with rank 0...\n";
		Bureaucrat	w("TOO HIGH", 0);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		std::cout << "Trying to create a bureaucrat with rank 151...\n";
		Bureaucrat	w("TOO LOW...", 151);
	}
	catch (Bureaucrat::GradeTooLowException)
	{
		std::cout << "The chosen rank was too low. Aborting operation...\n";
	}
	std::cout << b;
	try
	{
		std::cout << "Promoting " << b.getName() << "...\n";
		b.promote();
		std::cout << b;
		std::cout << "Promoting " << b.getName() << "...\n";
		b.promote();
		std::cout << "This is a post exception-throw instruction. (Tried to set the rank too high.)" << b << '\n';
	}
	catch (Bureaucrat::GradeTooHighException e)
	{
		std::cout << e.what();
	}
	try
	{
		Bureaucrat	low("Rank too low to demote", 150);
		std::cout << low;
		low.demote();
		std::cout << "This is a post exception-throw instruction. " << b;
	}
	catch (Bureaucrat::GradeTooLowException e)
	{
		std::cout << e.what();
	}
}
