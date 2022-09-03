/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/09/03 23:11:26 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "ShrubberyCreationForm.hpp"

ShruberryCreationForm::ShruberryCreationForm(void): Form()
{
	return ;
}

ShruberryCreationForm::ShruberryCreationForm(std::string target): _target(target), Form("ShrubForm", 145, 137)
{
	std::cout << "SCF constructor called on " << target << '\n'; 
	return ;
}

void	ShruberryCreationForm::craft_tree(std::string target) const
{
	std::string name;

	name = target;
	name += "_shrubbery";
	std::ofstream output(name.c_str());
	output << "               ,@@@@@@@, " << '\n';
	output << "       ,,,.   ,@@@@@@/@@,  .oo8888o. " << '\n';
	output << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o " << '\n';
	output << "   ,%&\%&&%&&%,@@@\\@@@/@@@88\\88888/88' " << '\n';
	output << "   %&&%&%&/%&&%@\\@@/ /@@@88888\\88888'" << '\n';
	output << "    %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88' " << '\n';
	output << "    `&%\\ ` /%&'    |.|        \\ '|8' " << '\n';
	output << "        |o|        | |         | | " << '\n';
	output << "        |.|        | |         | | " << '\n';
	output << "     \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << '\n';
	output.close();
	std::cout << "The trees have been crafted in " << target << ".\n";
}

void	ShruberryCreationForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() < this->_exec_rank && this->getStatus() == true)
		craft_tree(this->_target);	
	else
		throw (ShruberryCreationForm::ExecException());
}

ShruberryCreationForm::~ShruberryCreationForm(void)
{
	std::cout << "🌳ShruberryCreationForm destructor called.🌳\n";
	return ;
}

ShruberryCreationForm::ShruberryCreationForm(ShruberryCreationForm &copy)
{
	std::cout << "🌳ShruberryCreationForm copy constructor called.🌳\n";
	*this = copy;
}

ShruberryCreationForm	&ShruberryCreationForm::operator=(ShruberryCreationForm const &rhs)
{
	std::cout << "🌳Copy asignment operator called.🌳\n";
	return (*this);
}

std::ostream    &operator<<(std::ostream &o, ShruberryCreationForm const &rhs)
{
	o << "ShruberryCreationForm name: " << rhs.getName() << "\nSign rank: " << rhs.getSignGrade()
	<< "\nExec rank: " << rhs.getExecGrade() << "\nSign status: ";
	if (rhs.getStatus() == true)
		o << "signed\n";
	else
		o << "unsigned\n";
	return (o);
}
