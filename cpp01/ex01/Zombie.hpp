/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/12 11:43:23 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/13 10:59:48 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>

class Zombie{
public:
	void	setName(std::string name);
	void	setIndex(int index);
	int		getIndex(void) const;
	
	Zombie(std::string name);
	Zombie(void);
	~Zombie(void);

	void	announce(void);

private:
	int			_index;
	std::string	_name;
};

#endif
