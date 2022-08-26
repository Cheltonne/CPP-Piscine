/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:45:53 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/13 11:09:26 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name): _name(name)
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << "number " << this->getIndex() << " has died :(\n";
	return ;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ...\n";
	return ;
}

void	Zombie::setName(std::string name)
{
	this->_name = name;
	return ;
}

void	Zombie::setIndex(int index)
{
	this->_index = index;
	return ;
}

int		Zombie::getIndex(void) const
{
	return (this->_index);
}
