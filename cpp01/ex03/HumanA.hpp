/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/16 20:55:50 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/17 11:29:13 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <iostream>
# include "Weapon.hpp"

class HumanA{
public:
                        HumanA(std::string name, Weapon &weapon);
                        ~HumanA(void);
    void                attack(void);

private:
                    HumanA(void);
    std::string     name;
    Weapon          *_weapon;
};  

#endif
