/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:12:36 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/28 23:58:22 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "Zombie.h"

int main()
{
	std::string	name = "average heap enjoyer";
	Zombie *summons = zombieHorde(11, name);

	for (int i = 0; i < 11; i++)
	{
		std::cout << "Zombie " << summons[i].getIndex() << ": \n";
		summons[i].announce();
	}
	delete[] summons;
}
