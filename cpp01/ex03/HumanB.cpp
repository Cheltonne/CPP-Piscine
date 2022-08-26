/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:02:10 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/17 15:26:34 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanB::HumanB(void)
{
	this->_weapon = NULL;
	return ;
}

HumanB::HumanB(std::string name)
{
	this->name = name;
	_weapon = NULL;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::attack(void)
{
	if (this->_weapon)
		std::cout << "⚔️  " << this->name << " attacks with their " << this->_weapon->getType() << " ⚔️ \n";
	else
		std::cout << this->name << " is unarmed. " <<this->name << " punches the air...\n";
}

void	HumanB::setWeapon(Weapon &weapon)
{
	std::cout << this->name << " equips " << weapon.getType() << '\n';
	this->_weapon = &weapon;
}
