/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:28:32 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 14:29:15 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(void): _hp(10), _mana(10), _dmg(0)
{
	std::cout << "Clap default\n";
	return ;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hp(10), _mana(10), _dmg(0)
{
	std::cout << "ClapTrap " + name + " has been created!✨✨\n";
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "💥ClapTrap " + this->_name + " has been destroyed!💥\n";
	return ;
}

int		ClapTrap::getHp(void) const
{
	return (this->_hp);
}

void	ClapTrap::attack(const std::string &target)
{
	std::cout << this->_name + " attacks " + target + " and deals " <<\
	this->_dmg << " damage!🔫\n";
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << this->_name + " recovers " << amount << " Health Points!🔧\n";
	this->_hp += amount;
}

const std::string	&ClapTrap::getName(void) const
{
	return (this->_name);
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << this->_name + " lost " << amount << " Health Points!🤕\n";
	this->_hp -= amount;
	if (this->_hp <= 0)
	{
		std::cout << this->_name << " doesn't have any HP left!\n..." <<
		this->_name << " is K.O!\n";
		this->_hp = 0;
	}
}
