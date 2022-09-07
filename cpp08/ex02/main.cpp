/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 23:54:29 by chajax            #+#    #+#             */
/*   Updated: 2022/09/07 03:24:44 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include "colors.hpp"
#include <iostream>
#include <algorithm>
#include <list>

template <typename T>
typename T::iterator	easyfind(T &container, int toFind)
{
	typename T::iterator	ret;

	ret = find(container.begin(), container.end(), toFind);
	if (ret == container.end())
		throw (std::length_error("\033[31mDid not find any occurence of toFind in container.\n\033[37m"));
	return (ret);
}

int main()
{
	srand(time(NULL));
	std::cout << L_YELLOW << "\n           | STD::LIST |\n\n" << RESET;
	{
		std::list<int> mstack;
		mstack.push_back(5);
		mstack.push_back(17);
		std::cout << mstack.back() << std::endl;
		mstack.pop_back();
		std::cout << mstack.size() << std::endl;
		mstack.push_back(3);
		mstack.push_back(5);
		mstack.push_back(737);
		mstack.push_back(0);
		std::list<int>::iterator it = mstack.begin();
		std::list<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	std::cout << L_YELLOW << "\n           | MUTANT STACK |\n\n" << RESET;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	std::cout << L_YELLOW << "\n           | EASYFIND TESTING |" << RESET;
	{
		MutantStack<int>	vect;
		vect.push(1);
		vect.push(42);
		for (int i = 0; i < 42; i++)
			vect.push(rand() % 4242);
		std::cout << "\n\n\nThe container includes:" << '\n';
		for (MutantStack<int>::iterator it(vect.begin()); it != vect.end(); ++it)
			std::cout << *it << '\n';
		std::cout << "\nLooking for \'4242\'...\n";
		MutantStack<int>::iterator	ret;
		try{ ret = easyfind(vect, 4242); }
		catch (std::length_error e){ std::cout << e.what(); }

		std::cout << "\nLooking for \'42\'...\n";
		try
		{
			ret = easyfind(vect, 42);
			std::cout << "\033[32mFound: " << *ret << "\033[0m" << '\n';
		}
		catch (std::length_error e){ std::cout << e.what() << '\n'; }
	}
	return (0);
}
