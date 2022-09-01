/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/28 15:02:40 by chajax            #+#    #+#             */
/*   Updated: 2022/08/28 15:56:12 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main()
{
	Animal	*animal = new Animal();
	Animal	*dog = new Dog();
	Animal	*cat = new Cat();

	std::cout << '\n';
	animal->makeSound();
	dog->makeSound();
	cat->makeSound();
	std::cout << '\n';
	delete animal;
	delete dog;
	delete cat;
}
