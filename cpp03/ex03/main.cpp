/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:31:50 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 14:26:37 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <climits>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
	}
	
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
		std::cout << "\n                    #######FRAGTRAP STUFF##########\n\n";
	{
		FragTrap	captain("Captain America");
		FragTrap	random("random dude");

		std::cout << "a random dudeDow has " << random.getHp() << " HP left!\n";
		captain.attack("a random dude");
		random.takeDamage(9999);
		std::cout << "a random dudeDow has " << random.getHp() << " HP left!\n";
		std::cout << "Captain America has " << captain.getHp() << " HP left!\n";
		captain.beRepaired(9999999);
		std::cout << "Captain America has " << captain.getHp() << " HP left!\n";
		std::cout << "Captain America is flexing hard on these haters! 💪💪💪\n";
		captain.highFivesGuys();
	}*/
		std::cout << "\n                    #######DIAMONDTRAP STUFF##########\n\n";
	{
		DiamondTrap	captain("Captain America");
		DiamondTrap	random("[random dude]");

		std::cout << "\na random dude has " << random.getHp() << " HP left!\n";
		captain.attack("a random dude");
		random.takeDamage(captain.getDmg());
		std::cout << "a random dude has " << random.getHp() << " HP left!\n";
		std::cout << "Captain America has " << captain.getHp() << " HP left!\n";
		captain.DiamondTrap::beRepaired(50);
		std::cout << "Captain America has " << captain.getHp() << " HP left!\n\n";
		captain.highFivesGuys();
		captain.guardGate();
		captain.whoAmI();
		std::cout << '\n';
	}
}
