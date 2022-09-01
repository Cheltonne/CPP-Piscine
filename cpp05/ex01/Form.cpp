/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/09/01 18:51:51 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

Form::Form(void): _grade(150)
{
	std::cout << "✒️Form default constructor called.✒️\n";
	return ;
}

Form::Form(const std::string &name): _name(name), _grade(150)
{
	std::cout << "✒️Form " << this->getName() << " created.✒️\n\
	Rank: " << this->getGrade() << '\n';
	return ;
}

Form::Form(const std::string &name, int sign_rank, int exec_rank): _name(name), _sign_rank(sign_rank), _exec_rank(exec_rank)
{
	try
	{
		this->setGrade(rank);
	}
	catch (GradeTooHighException e)
	{
			std::cout << "Rank too high, cannot proceed.\n";
	}
	std::cout << "✒️Form " << this->getName() << " created.✒️\n\
	Rank:" << this->getGrade() << '\n';
	return ;
}

Form::~Form(void)
{
	std::cout << "✒️Form destructor called.✒️\n";
	return ;
}

Form::Form(Form &copy)
{
	std::cout << "✒️Form copy constructor called.✒️\n";
	*this = copy;
}

Form	&Form::operator=(Form const &rhs)
{
	std::cout << "✒️Copy asignment operator called.✒️\n";
	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream    &operator<<(std::ostream &o, Form const &rhs)
{
	o << rhs.getName() << ", bureaucrat rank " << rhs.getGrade() << ".\n";
	return (o);
}

void	Form::setName(std::string name)
{
	this->_name = name;
	return ;
}

const std::string	Form::getName(void) const
{
	return (this->_name);
}

int	Form::getSignGrade(void) const
{
	return (this->_grade);
}

void	Form::setSignGrade(int rank)
{
	if (rank < 1)
		throw (Form::GradeTooHighException());
	else if (rank > 150)
		throw (Form::GradeTooLowException());
	this->_grade = rank;
	return ;
}

void	Form::beSigned(Bureaucrat &b)
{
	try
	{
		
	}
}
