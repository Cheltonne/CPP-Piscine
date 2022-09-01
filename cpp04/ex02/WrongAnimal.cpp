/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 16:00:41 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "WrongAnimal default constructor called.\n";
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal destructor called.\n";
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal &copy)
{
	std::cout << "WrongAnimal copy constructor called.\n";
	copy.type = this->getType();
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &rhs)
{
	std::cout << "Copy asignment operator called.\n";
	this->type = rhs.getType();
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void)
{
	std::cout << "*WrongAnimal noise...I guess?*\n";
	return ;
}
