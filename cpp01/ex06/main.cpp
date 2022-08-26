/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:37:56 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/17 22:32:07 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"
#include "Harl.hpp"
#include <iostream>

int	main(int ac, char **av)
{
	if (ac != 2 || av[1][0] == '\0')
	{
		std::cout << "Please select only ONE level at a time between [DEBUG], [INFO], [WARNING] or [ERROR].\n";
		return (0);
	}
	Harl		karen;

	t_lookup	table[5] =
	{
		{1, "DEBUG"},
		{2, "INFO"},
		{3, "WARNING"},
		{4, "ERROR"}
	};
	for (int i = 0; i < 4; i++)
	{
		if (table[i].level == av[1])
		{
			karen.complain(table[i].lvl);
			return (0);
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]\n";
}
