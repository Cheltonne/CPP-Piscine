/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 19:30:29 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/17 22:27:29 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;
}

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-\
pickle-special-ketchup burger.\nI really do!\n\n";
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]\nI cannot believe adding extra bacon costs more money.\nYou didn’t put \
enough bacon in my burger!\nIf you did, I wouldn’t be asking for more!\n\n";
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]\nI think I deserve to have some extra bacon for free.\nI’ve been coming for \
years whereas you started working here since last month.\n\n";
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]\nThis is unacceptable, I want to speak to the manager now.\n\n";
}

void	Harl::complain(int	lvl)
{
	switch(lvl)
	{
		case(1):
			this->debug();
			this->info();
			this->warning();
			this->error();
			break;
		case(2):
			this->info();
			this->warning();
			this->error();
			break;
		case(3):
			this->warning();
			this->error();
			break;
		case(4):
			this->error();
	}
}
