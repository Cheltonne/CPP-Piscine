/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 22:01:10 by chajax42          #+#    #+#             */
/*   Updated: 2022/07/16 23:24:03 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <ctype.h>

int	main(int ac, char **av)
{
	std::string	str;
	if (ac > 1)
	{
		for (int a = 1; a < ac; a++)
		{
			str.append(av[a]);
			if (a != ac - 1)
				str.append(" ");
		}
		for (size_t o = 0; o < str.size(); o++)
		{
			if (str[o] != ' ' && islower(str[o]))
				std::cout << (char)(str[o] - 32);
			else
				std::cout << str[o];
		}
		std::cout << std::endl;
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n";
}
