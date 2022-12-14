/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 16:15:01 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "๐Dog default constructor called.๐\n";
	Animal::type = "Dog";
	return ;
}

Dog::~Dog(void)
{
	std::cout << "๐Dog destructor called.๐\n";
	return ;
}

Dog::Dog(Dog &copy)
{
	std::cout << "๐Dog copy constructor called.๐\n";
	copy.type = this->type;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "๐Copy asignment operator called.๐\n";
	this->type = rhs.getType();
	return (*this);
}

void	Dog::makeSound(void)
{
	std::cout << "๐Woof!๐\n";
	return ;
}
