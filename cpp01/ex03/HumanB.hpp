/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:55:50 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/17 11:44:08 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanB{
public:
                        HumanB(std::string name);
                        ~HumanB(void);
	void				setWeapon(Weapon	&weapon);
    void                attack(void);

private:
                    HumanB(void);
    std::string     name;
    Weapon          *_weapon;
};  

#endif
