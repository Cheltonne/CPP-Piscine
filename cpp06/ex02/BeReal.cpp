/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BeReal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:56:05 by chajax42          #+#    #+#             */
/*   Updated: 2022/09/04 22:15:00 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BeReal.hpp"

Base::~Base() {

	std::cout << "BeReal default constructor called." << '\n';
}

Base	*generate() {

	int		randomValue;
	Base	*base;

 	srand (time(NULL));
	randomValue = (rand() % 3) + 1;
	switch (randomValue)
	{
		case 1:
			base = new A;
			break;
		case 2:
			base = new B;
			break;
		case 3:
			base = new C;
			break;
		default:
			base = NULL;
	}
	return (base);
}

void	identify(Base *p)
{
	std::cout << GREEN_B << "The random chosen type [ptr] is: " << RESET;
	A *classA = dynamic_cast<A *>(p);
	if (classA)
	{
		std::cout << SKY_B << "A" << RESET << '\n';
		return ;
	}
	B *classB = dynamic_cast<B *>(p);
	if (classB)
	{
		std::cout << SKY_B << "B" << RESET << '\n';
		return ;
	}
	C *classC = dynamic_cast<C *>(p);
	if (classC)
	{
		std::cout << SKY_B << "C" << RESET <<'\n';
		return ;
	}
}

void	identify(Base& p) {

	std::cout << '\n' << '\n';
	std::cout << PINK_B << "And the random chosen type [ref] is " << RESET;
	try
	{
		A classA = dynamic_cast<A &>(p);
		std::cout << SKY_B << "A" << RESET << '\n';
		return ;
	}
	catch(const std::exception& e) {}
	try
	{
		B classB = dynamic_cast<B &>(p);
		std::cout << SKY_B << "B" << RESET << '\n';
		return ;
	}
	catch(const std::exception& e) {}
	try
	{
		C classC = dynamic_cast<C &>(p);
		std::cout << SKY_B << "C" << RESET << '\n';
		return ;
	}
	catch(const std::exception& e) {}
}
