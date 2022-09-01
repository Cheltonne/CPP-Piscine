/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:28:32 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 14:51:10 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap(void)
{
	return ;
}

DiamondTrap::DiamondTrap(std::string name): _name(name), ClapTrap(name + "_clap_name")
{
	this->DiamondTrap::_hp = FragTrap::_hp;
	this->DiamondTrap::_mana = ScavTrap::_mana;
	this->DiamondTrap::_dmg = FragTrap::_dmg;
	std::cout << "DiamondTrap " + name + " has been created!💠💠\n";
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "💥DiamondTrap " + this->_name + " has been destroyed!💥\n";
	return ;
}

void	DiamondTrap::attack(const std::string &target)
{
	ScavTrap::attack(target);
	return ;
}

int	DiamondTrap::getDmg(void) const
{
	return (this->_dmg);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "My 🔷DiamondTrap🔷 name is: " << this->_name << "\nAnd my 🤖ClapTrap🤖 name is: "
	<< ClapTrap::_name << "\nInterestingly enough, here are my two other names:\nScavTrapName: " <<
	ScavTrap::_name << "\nFragTrap name: " << FragTrap::_name << '\n';
}
