/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:12:36 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/28 23:47:53 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "Zombie.h"

int main()
{
	std::string	name = "average heap enjoyer";
	std::string	name2 = "average stack fan";
	std::string	name3 = "[Guy that just stays on the stack doing nothing during the whole program and then poof, dies]";

	Zombie	guy(name3);
	Zombie* Chad = newZombie(name);
	randomChump(name2);
	Chad->announce();
	delete Chad;
}
