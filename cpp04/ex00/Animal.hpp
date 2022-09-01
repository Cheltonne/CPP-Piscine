/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:35 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 15:42:50 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>

class	Animal
{
	protected:
		std::string type;
	public:
		Animal(void);
		~Animal(void);
		Animal(Animal &copy);
		Animal &operator=(const Animal &rhs);
		std::string		getType(void) const;
		virtual	void	makeSound(void);
};

#endif
