/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:28:32 by chajax            #+#    #+#             */
/*   Updated: 2022/08/26 18:41:07 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap(void)
{
	return ;
}

ScavTrap::ScavTrap(std::string name): _name(name), _hp(100), _mana(50), _dmg(20)
{
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
	std::cout << this->_name + " attacks " + target + " and deals " <<\
	this->_dmg << " damage!🔫\n";
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->_name << " has entered Gate Keeper mode!🪨 \n";
}
