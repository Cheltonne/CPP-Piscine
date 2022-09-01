/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:28:32 by chajax            #+#    #+#             */
/*   Updated: 2022/08/27 15:38:08 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->ScavTrap::_hp = 100;
	this->ScavTrap::_mana = 50;
	this->ScavTrap::_dmg = 20;
	std::cout << "ScavTrap " + name + " has been created!🥾🥾\n";
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "💥ScavTrap " + this->_name + " has been destroyed!💥\n";
	return ;
}

void	ScavTrap::attack(const std::string &target)
{
	std::cout << this->getName() + " attacks " + target + " and deals " <<\
	this->_dmg << " damage!🔫 SCAVTRAP\n";
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " has entered Gate Keeper mode!🪨 \n";
}
