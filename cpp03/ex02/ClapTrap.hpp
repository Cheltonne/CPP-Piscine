/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:22:44 by chajax            #+#    #+#             */
/*   Updated: 2022/08/27 16:33:27 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>

class ClapTrap
{
	protected:
		std::string	_name;
		int			_hp;
		int			_mana;
		int			_dmg;
	public:
		ClapTrap(void);
		ClapTrap(std::string name);
		~ClapTrap(void);
		const std::string &getName(void) const;
		int		getHp(void) const;
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
