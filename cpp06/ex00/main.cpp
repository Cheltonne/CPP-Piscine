/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:24:54 by chajax42          #+#    #+#             */
/*   Updated: 2022/09/05 11:00:24 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << RED_B << "⛔ Wrong number of arguments, there should be one argument. ⛔\n" << RESET;
		return (1);
	}

	Conversion	conversion(argv[1]);
	conversion.display();
	return (0);
}
