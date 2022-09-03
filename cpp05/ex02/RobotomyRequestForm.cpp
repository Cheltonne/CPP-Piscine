/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/09/03 23:41:22 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form()
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(target), Form("ShrubForm", 72, 45)
{
	std::cout << "SCF constructor called on " << target << '\n'; 
	return ;
}

void RobotomyRequestForm::robotomize(void) const
{
	if (randomize(0, 1))
		std::cout << "*DRILL!* " << this->_target << " has been successfully robotomized" << '\n';
	else
		std::cout << "Robotomization failed" << '\n';
}

int	randomize(int min, int max)
{
    static bool first = true;
    if (first)
	{
        srand(time(NULL));
        first = false;
    }
    return (min + rand() % ((max + 1) - min));
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() < this->_exec_rank && this->getStatus() == true)
		robotomize();	
	else
		throw (RobotomyRequestForm::ExecException());
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "🤖RobotomyRequestForm destructor called.🤖\n";
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &copy)
{
	std::cout << "🤖RobotomyRequestForm copy constructor called.🤖\n";
	*this = copy;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	std::cout << "🤖Copy asignment operator called.🤖\n";
	return (*this);
}

std::ostream    &operator<<(std::ostream &o, RobotomyRequestForm const &rhs)
{
	o << "RobotomyRequestForm name: " << rhs.getName() << "\nSign rank: " << rhs.getSignGrade()
	<< "\nExec rank: " << rhs.getExecGrade() << "\nSign status: ";
	if (rhs.getStatus() == true)
		o << "signed\n";
	else
		o << "unsigned\n";
	return (o);
}
