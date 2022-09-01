/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:22:44 by chajax            #+#    #+#             */
/*   Updated: 2022/08/27 15:29:43 by chajax           ###   ########.fr       */
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
		virtual const std::string &getName(void) const;
		virtual int		getHp(void) const;
		virtual void	attack(const std::string &target);
		virtual void	takeDamage(unsigned int amount);
		virtual void	beRepaired(unsigned int amount);
};

#endif
