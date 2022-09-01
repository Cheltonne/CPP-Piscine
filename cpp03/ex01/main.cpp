/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:31:50 by chajax            #+#    #+#             */
/*   Updated: 2022/08/27 15:25:05 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <climits>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main()
{
	/*{
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
	}*/
	
		std::cout << "\n                    #######SCAVTRAP STUFF##########\n\n";
	{
		ScavTrap	paul("Paul Sauvage");
		ScavTrap	frak("Franckycow09");

		std::cout << "Franckycow09Dow has " << frak.getHp() << " HP left!\n";
		paul.attack("Franckycow09");
		frak.takeDamage(9999);
		std::cout << "Franckycow09Dow has " << frak.getHp() << " HP left!\n";
		std::cout << "Paul has " << paul.getHp() << " HP left!\n";
		paul.beRepaired(9999999);
		std::cout << "Paul has " << paul.getHp() << " HP left!\n";
		std::cout << "Paul is flexing hard on these haters! 💪💪💪\n";
	}
}
