/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 15:05:10 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 16:06:06 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int	main(void)
{
	std::vector<int>	vect(3, 42);

	vect.push_back(1);
	std::cout << "\n\n\nThe container includes:" << '\n';
	for (std::vector<int>::iterator it(vect.begin()); it != vect.end(); ++it)
		std::cout << *it << '\n';
	std::cout << "\nLooking for \'4242\'...\n";
	std::vector<int>::iterator	ret;
	try{ ret = easyfind(vect, 4242); }
	catch (std::length_error e){ std::cout << e.what(); }

	std::cout << "\nLooking for \'42\'...\n";
	try
	{
		ret = easyfind(vect, 42);
		std::cout << "\033[32mFound: " << *ret << "\033[0m" << '\n';
	}
	catch (std::length_error e){ std::cout << e.what() << '\n'; }
//TEST 2
	{
		std::list<int>::iterator	ret2;
 		int myInts[] = {16,2,77,29};
  		std::list<int>	myList;

		for (int i = 0; i < 4; i++)
			myList.push_back(myInts[i]);
		std::cout << "\nThe list includes:" << '\n';
		for (std::list<int>::iterator it(myList.begin()); it != myList.end(); ++it)
			std::cout << *it << '\n';

  		std::cout << "Looking for \'6\'..." << '\n';
		try
		{
			ret2 = easyfind(myList, 6);
			std::cout << "\033[32mFound: " << *ret2 << "\033[0m" << '\n';
		}
		catch (std::length_error e){ std::cout << e.what(); }
  		std::cout << "Looking for \'77\'..." << '\n';
		try
		{
			ret2 = easyfind(myList, 77);
			std::cout << "\033[32mFound: " << *ret2 << "\033[0m" << '\n';
		}
		catch (std::length_error e){ std::cout << e.what(); }
	}
	return (0);
}
