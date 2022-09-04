/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/09/04 11:01:16 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form()
{
	return ;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): _target(target), Form("Robotomy Request Form", 72, 45)
{
	std::cout << "RRF constructor called on " << target << '\n'; 
	return ;
}

void RobotomyRequestForm::action(void) const
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
