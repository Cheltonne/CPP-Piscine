/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:22:44 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 14:24:01 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include <iostream>

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	public:
		DiamondTrap(void);
		DiamondTrap(std::string name);
		~DiamondTrap(void);
		void	attack(const std::string &target);
		void	whoAmI(void) const;
		int		getDmg(void) const;
};

#endif
