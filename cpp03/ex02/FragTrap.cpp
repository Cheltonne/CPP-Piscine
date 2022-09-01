/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:28:32 by chajax            #+#    #+#             */
/*   Updated: 2022/08/27 16:32:14 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap(void)
{
	return ;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->FragTrap::_hp = 100;
	this->FragTrap::_mana = 100;
	this->FragTrap::_dmg = 30;
	std::cout << "FragTrap " + name + " has been created!🥾🥾\n";
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "💥FragTrap " + this->_name + " has been destroyed!💥\n";
	return ;
}

void	FragTrap::attack(const std::string &target)
{
	std::cout << this->getName() + " attacks " + target + " and deals " <<\
	this->_dmg << " damage!🔫 FRAGTRAP\n";
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->_name << ": gimme 5!!!!!👏👏👏\n";
	return ;
}
