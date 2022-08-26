/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:12:36 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/12 12:53:34 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "Zombie.h"

int main()
{
	std::string	name = "average heap enjoyer";
	std::string	name2 = "average stack fan";

	Zombie* Chad = newZombie(name);
	randomChump(name2);
	Chad->announce();
	delete Chad;
}
