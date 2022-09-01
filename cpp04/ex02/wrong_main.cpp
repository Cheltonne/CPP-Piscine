/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong_main.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:02:40 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 16:08:50 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	WrongAnimal	*animal = new WrongAnimal();
	WrongAnimal	*cat = new WrongCat();

	std::cout << '\n';
	animal->makeSound();
	cat->makeSound();
	std::cout << '\n';
	delete animal;
	delete cat;
}
