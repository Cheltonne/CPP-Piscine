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
	std::cout << "πCat default constructor called.π\n";
	type = "Cat";
	_brain = new Brain();
	return ;
}

Cat::~Cat(void)
{
	std::cout << "πCat destructor called.\nπ";
	delete _brain;
	return ;
}

Cat::Cat(Cat &copy)
{
	std::cout << "πCat copy constructor called.π\n";
	copy.type = this->type;
	return ;
}

Cat	&Cat::operator=(Cat const &rhs)
{
	std::cout << "πCopy asignment operator called.π\n";
	this->type = rhs.getType();
	return (*this);
}

void	Cat::makeSound(void)
{
	std::cout << "πMeow!π\n";
	return ;
}
