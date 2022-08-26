/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 12:56:42 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/13 11:01:15 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "Zombie.h"
#include <iostream>

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *ret = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		ret[i].setIndex(i);
		ret[i].setName(name);
	}
	return (ret);
}
