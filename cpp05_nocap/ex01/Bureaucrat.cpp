/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/09/05 23:11:01 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _grade(150)
{
	std::cout << "👔Bureaucrat default constructor called.👔\n";
	return ;
}

Bureaucrat::Bureaucrat(const std::string &name, int rank): _name(name)
{
	try
	{
		this->setGrade(rank);
	}
	catch (GradeTooHighException e)
	{
			std::cout << "Rank too high, cannot proceed.\n";
	}
	std::cout << "👔Bureaucrat " << this->getName() << " created.👔\nRank:" << this->getGrade() << '\n';
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "👔Bureaucrat destructor called.👔\n";
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat &copy)
{
	std::cout << "👔Bureaucrat copy constructor called.👔\n";
	*this = copy;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	std::cout << "👔Copy asignment operator called.👔\n";
	this->_grade = rhs.getGrade();
	return (*this);
}

std::ostream    &operator<<(std::ostream &o, Bureaucrat const &rhs)
{
	o << rhs.getName() << ", bureaucrat rank " << rhs.getGrade() << ".\n";
	return (o);
}

const std::string	Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::setGrade(int rank)
{
	if (rank < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (rank > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->_grade = rank;
	return ;
}

void	Bureaucrat::promote(void)
{
	this->setGrade(this->getGrade() - 1);
	return ;
}

void	Bureaucrat::demote(void)
{
	this->setGrade(this->getGrade() + 1);
	return ;
}

void	Bureaucrat::signForm(Form &f)
{
	try
	{
		f.beSigned(*this);
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << this->getName() << " couldn't sign " << f.getName() <<\
		" because: " << e.what();
		return ;
	}
	if (this->getGrade() <= f.getSignGrade())
		std::cout << this->getName() << " signed " << f.getName() << '\n';
}
