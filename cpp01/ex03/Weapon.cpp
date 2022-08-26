/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:02:10 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/17 15:27:28 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void)
{
	return ;
}

Weapon::Weapon(std::string type): _type(type) 
{
	return ;
}

Weapon::~Weapon(void)
{
	std::cout << this->_type << " broke...\n";
	return ;
}

std::string const	&Weapon::getType(void) const
{
	return (this->_type);
}

void	Weapon::setType(std::string type)
{
	std::cout << this->_type << " is now " << '[' << type << "]\n";
	this->_type = type;
	return ;
}
