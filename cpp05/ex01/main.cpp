/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 19:47:05 by chajax            #+#    #+#             */
/*   Updated: 2022/09/04 00:56:33 by chajax           ###   ########.fr       */
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

	std::cout << f;
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
	v.signForm(f);
	yoasobi.signForm(f);
}
