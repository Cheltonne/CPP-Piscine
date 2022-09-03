/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/09/03 15:53:13 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

Form::Form(void): _name("Default form"), _sign_rank(0), _exec_rank(0)
{
	return ;
}

Form::Form(std::string name, int sign_rank, int exec_rank): _name(name), _is_signed(false), _sign_rank(sign_rank), _exec_rank(exec_rank)
{
	try
	{
		if (sign_rank < 1 || exec_rank < 1)
			throw (Form::GradeTooHighException());
		else if (sign_rank > 150 || exec_rank > 150)
			throw (Form::GradeTooLowException());
	}
	catch (Form::GradeTooLowException e)
	{
		std::cout << "Couldn't create the form because: " << e.what();
	}
	catch (Form::GradeTooHighException e)
	{
		std::cout << "Couldn't create the form because: " << e.what();
	}
	std::cout << "✒️ Form " << this->getName() << " created.✒️\nSign rank: " << this->getSignGrade() << '\n' << "Exec rank: "\
	<< this->getExecGrade() << '\n';
	return ;
}

Form::~Form(void)
{
	std::cout << "✒️ Form destructor called.✒️\n";
	return ;
}

Form::Form(Form &copy): _name(copy.getName()), _is_signed(copy.getStatus()), _sign_rank(copy.getSignGrade()), _exec_rank(copy.getExecGrade())
{
	std::cout << "✒️ Form copy constructor called.✒️\n";
	*this = copy;
}

Form	&Form::operator=(Form const &rhs)
{
	std::cout << "✒️Copy asignment operator called.✒️\n";
	return (*this);
}

std::ostream    &operator<<(std::ostream &o, Form const &rhs)
{
	o << rhs.getName() << "form.\nSign rank: " << rhs.getSignGrade()
	<< "\nExec rank: " << rhs.getExecGrade() << "\nSign status: ";
	if (rhs.getStatus() == true)
		o << "yes\n";
	else
		o << "no\n";
	return (o);
}

const std::string	Form::getName(void) const
{
	return (this->_name);
}

int	Form::getSignGrade(void) const
{
	return (this->_exec_rank);
}

int	Form::getExecGrade(void) const
{
	return (this->_exec_rank);
}

const bool	Form::getStatus(void) const
{
	return (this->_is_signed);
}

void	Form::setStatus(bool status)
{
	this->_is_signed = status;
	return ;
}

void	Form::beSigned(Bureaucrat b)
{
	try
	{
		b.signForm(*this);
	}
	catch (Bureaucrat::GradeTooHighException &e)
	{
		std::cout << e.what();
	}
}
