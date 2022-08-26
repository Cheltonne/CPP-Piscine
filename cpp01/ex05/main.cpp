/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 21:37:56 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/17 21:48:49 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	main()
{
	Harl	karen;

	std::cout << "The different levels of Harl's complaining:\n1) DEBUG: ";
	karen.complain("debug");
	std::cout << "\n2) INFO: ";
	karen.complain("info");
	std::cout << "\n3) WARNING: ";
	karen.complain("warning");
	std::cout << "\n4) ERROR: ";
	karen.complain("error");
}
