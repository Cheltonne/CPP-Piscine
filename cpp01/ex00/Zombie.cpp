/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:45:53 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/26 14:29:46 by chajax           ###   ########.fr       */
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
	std::cout << this->_name << " has died :(\n";
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
