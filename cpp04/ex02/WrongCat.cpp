/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:54:55 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 16:02:17 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	std::cout << "WrongCat default constructor called.\n";
	type = "WrongCat";
	return ;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat destructor called.\n";
	return ;
}

WrongCat::WrongCat(WrongCat &copy)
{
	std::cout << "WrongCat copy constructor called.\n";
	copy.type = this->type;
	return ;
}

WrongCat	&WrongCat::operator=(WrongCat const &rhs)
{
	std::cout << "Copy asignment operator called.\n";
	this->type = rhs.getType();
	return (*this);
}

void	WrongCat::makeSound(void)
{
	std::cout << "Meow!\n";
	return ;
}
