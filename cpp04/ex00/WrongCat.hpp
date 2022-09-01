/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 14:52:35 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 16:10:17 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP
# include <iostream>
# include "WrongAnimal.hpp"

class	WrongCat: public WrongAnimal
{
	protected:
	public:
		WrongCat(void);
		~WrongCat(void);
		WrongCat(WrongCat &copy);
		WrongCat &operator=(WrongCat const &rhs);
		void	makeSound(void);
};

#endif
