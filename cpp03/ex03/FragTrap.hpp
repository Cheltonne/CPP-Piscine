/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/26 16:22:44 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 13:06:47 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"
# include <iostream>

class FragTrap: virtual public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(std::string name);
		~FragTrap(void);
		void	attack(const std::string &target);
		void	highFivesGuys(void);
};

#endif
