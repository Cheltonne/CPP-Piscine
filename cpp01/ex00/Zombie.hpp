/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:43:23 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/13 10:34:35 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie{
public:
	void	setName(std::string name);

	Zombie(void);
	~Zombie(void);
	Zombie(std::string name);

	void	announce(void);

private:
	std::string	_name;
};

#endif
