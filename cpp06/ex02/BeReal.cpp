/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BeReal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:56:05 by chajax42          #+#    #+#             */
/*   Updated: 2022/09/06 09:14:46 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BeReal.hpp"

Base::~Base()
{
	return ;
}

Base	*generate()
{
	int		randomValue;
	Base	*base;

 	srand (time(NULL));
	randomValue = (rand() % 3) + 1;
	switch (randomValue)
	{
		case 1:
			base = new A;
			std::cout << RED_B << "The generated type was: A\n"; 
			break;
		case 2:
			base = new B;
			std::cout << RED_B << "The generated type was: B\n"; 
			break;
		case 3:
			base = new C;
			std::cout << RED_B << "The generated type was: C\n"; 
			break;
		default:
			base = NULL;
			std::cout << RED_B << "No type was generated.\n"; 
	}
	return (base);
}

void	identify(Base *p)
{
	std::cout << GREEN_B << "The random chosen type [ptr] is: " << RESET;
	A *classA = dynamic_cast<A *>(p);
	if (classA != NULL)
	{
		std::cout << SKY_B << "A" << RESET;
		return ;
	}
	B *classB = dynamic_cast<B *>(p);
	if (classB != NULL)
	{
		std::cout << SKY_B << "B" << RESET;
		return ;
	}
	C *classC = dynamic_cast<C *>(p);
	if (classC != NULL)
	{
		std::cout << SKY_B << "C" << RESET;
		return ;
	}
}

void	identify(Base& p) {

	std::cout << '\n' << '\n';
	std::cout << PINK_B << "The random chosen type [ref] is " << RESET;
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
