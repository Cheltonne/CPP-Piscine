/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/09/03 23:50:05 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form()
{
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target): _target(target), Form("ShrubForm", 25, 5)
{
	std::cout << "SCF constructor called on " << target << '\n'; 
	return ;
}

void	PresidentialPardonForm::pardon(void) const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblerox.\n";
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() < this->_exec_rank && this->getStatus() == true)
		pardon();
	else
		throw (PresidentialPardonForm::ExecException());
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "🇵🇭PresidentialPardonForm destructor called.🇵🇭\n";
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &copy)
{
	std::cout << "🇵🇭PresidentialPardonForm copy constructor called.🇵🇭\n";
	*this = copy;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	std::cout << "🇵🇭Copy asignment operator called.🇵🇭\n";
	return (*this);
}

std::ostream    &operator<<(std::ostream &o, PresidentialPardonForm const &rhs)
{
	o << "PresidentialPardonForm name: " << rhs.getName() << "\nSign rank: " << rhs.getSignGrade()
	<< "\nExec rank: " << rhs.getExecGrade() << "\nSign status: ";
	if (rhs.getStatus() == true)
		o << "signed\n";
	else
		o << "unsigned\n";
	return (o);
}
