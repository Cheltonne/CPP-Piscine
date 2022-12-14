/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 12:00:02 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/29 00:05:17 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon{
public:
						Weapon(std::string type);
						Weapon(void);
						~Weapon(void);
	std::string const	&getType(void) const;
	void				setType(std::string type);

private:
	std::string	_type;
};

#endif
