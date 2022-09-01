/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 18:04:20 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "🐈Cat default constructor called.🐈\n";
	type = "Cat";
	_brain = new Brain();
	return ;
}

Cat::~Cat(void)
{
	std::cout << "🐈Cat destructor called.\n🐈";
	delete _brain;
	return ;
}

Cat::Cat(Cat &copy)
{
	std::cout << "🐈Cat copy constructor called.🐈\n";
	copy.type = this->type;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << "🐈Copy asignment operator called.🐈\n";
	this->type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "🐈Meow!🐈\n";
	return ;
}
