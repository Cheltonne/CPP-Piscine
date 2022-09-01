/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:22:44 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 14:51:05 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class ScavTrap: virtual public ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(std::string name);
		~ScavTrap(void);
		void	attack(const std::string &target);
		void	guardGate(void);
};

#endif
