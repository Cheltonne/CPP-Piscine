/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 18:04:02 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{
	std::cout << "๐Dog default constructor called.๐\n";
	Animal::type = "Dog";
	_brain = new Brain;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "๐Dog destructor called.๐\n";
	delete _brain;
	return ;
}

Dog::Dog(Dog &copy)
{
	std::cout << "๐Dog copy constructor called.๐\n";
	copy.type = this->type;
	copy._brain = this->_brain;
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
