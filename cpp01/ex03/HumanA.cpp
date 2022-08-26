/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:02:10 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/17 15:26:52 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): name(name), _weapon(&weapon)
{
	return ;
}

HumanA::HumanA(void)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void	HumanA::attack(void)
{
	std::cout << "⚔️  " << this->name << " attacks with their " << this->_weapon->getType() << " ⚔️ \n";
}
