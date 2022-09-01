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
	std::cout << "🐕Dog default constructor called.🐕\n";
	Animal::type = "Dog";
	_brain = new Brain;
	return ;
}

Dog::~Dog(void)
{
	std::cout << "🐕Dog destructor called.🐕\n";
	delete _brain;
	return ;
}

Dog::Dog(Dog &copy)
{
	std::cout << "🐕Dog copy constructor called.🐕\n";
	copy.type = this->type;
	copy._brain = this->_brain;
	return ;
}

Dog	&Dog::operator=(Dog const &rhs)
{
	std::cout << "🐕Copy asignment operator called.🐕\n";
	this->type = rhs.getType();
	return (*this);
}

void	Dog::makeSound(void)
{
	std::cout << "🐕Woof!🐕\n";
	return ;
}
