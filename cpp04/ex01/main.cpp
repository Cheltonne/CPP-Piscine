/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:02:40 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 18:44:39 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	Animal *Animals[10];

	for	(int i = 0; i < 10; i++)
	{
		if (i < 5)
			Animals[i] = new Dog();
		else
			Animals[i] = new Cat();
	}
	std::cout << "\033[1;33m" <<  "\n----------------------------------\n|-----DESTRUCTION TIME BABY--\
----|\n----------------------------------\n" << "\033[0m" << '\n';
	for (int i = 0; i < 10; i++)
		delete Animals[i];
}
