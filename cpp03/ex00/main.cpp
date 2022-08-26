/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:31:50 by chajax            #+#    #+#             */
/*   Updated: 2022/08/26 17:06:20 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <climits>
#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	chelton("Chelton");
	ClapTrap	sacha("SachaDow Jones Industrial Average Index");

	std::cout << "SachaDow has " << sacha.getHp() << " HP left!\n";
	chelton.attack("Sacha");
	sacha.takeDamage(9999);
	std::cout << "SachaDow has " << sacha.getHp() << " HP left!\n";
	std::cout << "Chelton has " << chelton.getHp() << " HP left!\n";
	chelton.beRepaired(9999999);
	std::cout << "Chelton has " << chelton.getHp() << " HP left!\n";
	std::cout << "Chelton is flexing hard on these haters! 💪💪💪\n";
}
