/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:45:05 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 19:51:46 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <cstdlib>

int main()
{
	{
		std::cout << "     | 42 TESTS |\n";
		Span sp;
		sp = Span(6);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		try { sp.addNumber(42); }
		catch (std::length_error e){ std::cout << e.what();  }
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "     | MY TESTS |\n";
		Span						sp(42000);
		std::vector<int>			vtr;

		for (int i = 0; i < 42000; i++)
			vtr.push_back(rand() % 420);
		std::vector<int>::iterator	start = vtr.begin();
		std::vector<int>:: iterator	end = vtr.end();
		sp.addNumber(start, end);
		try { sp.addNumber(42); }
		catch (std::length_error e){ std::cout << e.what();  }
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
}
