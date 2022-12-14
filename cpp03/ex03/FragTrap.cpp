/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:28:32 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 14:28:29 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
	this->FragTrap::_hp = 100;
	this->FragTrap::_mana = 100;
	this->FragTrap::_dmg = 30;
	return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->FragTrap::_hp = 100;
	this->FragTrap::_mana = 100;
	this->FragTrap::_dmg = 30;
	std::cout << "FragTrap " + name + " has been created!๐ฅพ๐ฅพ\n";
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "๐ฅFragTrap " + this->_name + " has been destroyed!๐ฅ\n";
	return ;
}

void	FragTrap::attack(const std::string &target)
{
	std::cout << this->getName() + " attacks " + target + " and deals " <<\
	this->_dmg << " damage!๐ซ FRAGTRAP\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << ": gimme 5!!!!!๐๐๐\n";
	return ;
}
