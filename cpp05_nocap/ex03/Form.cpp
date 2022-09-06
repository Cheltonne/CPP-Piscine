/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/09/05 23:37:57 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Form.hpp"

Form::Form(void): _is_signed(false), _name("Default form"), _sign_rank(150), _exec_rank(150)
{
	return ;
}

Form::Form(std::string name, int sign_rank, int exec_rank): _is_signed(false), _name(name), _sign_rank(sign_rank), _exec_rank(exec_rank)
{
	if (sign_rank < 1 || exec_rank < 1)
		throw (Form::GradeTooHighException());
	else if (sign_rank > 150 || exec_rank > 150)
		throw (Form::GradeTooLowException());
	std::cout << "✒️ Form " << this->getName() << " created.✒️\nSign rank: " << this->getSignGrade() << '\n' << "Exec rank: "\
	<< this->getExecGrade() << "\n\n";
	return ;
}

Form::~Form(void)
{
	std::cout << "✒️ Form destructor called.✒️\n";
	return ;
}

Form::Form(Form &copy): _is_signed(copy.getStatus()), _name(copy.getName()), _sign_rank(copy.getSignGrade()), _exec_rank(copy.getExecGrade())
{
	std::cout << "✒️ Form copy constructor called.✒️\n";
	*this = copy;
}

Form	&Form::operator=(Form const &rhs)
{
	(void)rhs;
	std::cout << "✒️Copy asignment operator called.✒️\n";
	return (*this);
}

std::ostream    &operator<<(std::ostream &o, Form const &rhs)
{
	o << "Form name: " << rhs.getName() << "\nSign rank: " << rhs.getSignGrade()
	<< "\nExec rank: " << rhs.getExecGrade() << "\nSign status: ";
	if (rhs.getStatus() == true)
		o << "signed\n";
	else
		o << "unsigned\n";
	return (o);
}

const std::string	Form::getName(void) const
{
	return (this->_name);
}

int	Form::getSignGrade(void) const
{
	return (this->_sign_rank);
}

int	Form::getExecGrade(void) const
{
	return (this->_exec_rank);
}

bool	Form::getStatus(void) const
{
	return (this->_is_signed);
}

void	Form::setStatus(bool status)
{
	this->_is_signed = status;
	return ;
}

void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->getSignGrade())
		this->setStatus(true);
	else
		throw (Form::GradeTooLowException());
	return ;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() <= this->getExecGrade() && this->getStatus() == true)
		this->action();
	else if (executor.getGrade() > this->getExecGrade())
		throw (Form::GradeTooLowException());
	else
		throw (Form::FormIsNotSigned());
	return ;
}

void	Form::action(void) const
{
	std::cout << "You called the wrong action function.\n";
	return ;
}
