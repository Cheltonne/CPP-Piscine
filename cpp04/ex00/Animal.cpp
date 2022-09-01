/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 15:46:44 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Animal.hpp"

Animal::Animal(void)
{
	std::cout << "Animal default constructor called.\n";
	return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called.\n";
	return ;
}

Animal::Animal(Animal &copy)
{
	std::cout << "Animal copy constructor called.\n";
	copy.type = this->getType();
}

Animal	&Animal::operator=(Animal const &rhs)
{
	std::cout << "Copy asignment operator called.\n";
	this->type = rhs.getType();
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void)
{
	std::cout << "*Animal noise...I guess?*\n";
	return ;
}
