/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:45:05 by chajax            #+#    #+#             */
/*   Updated: 2022/09/07 03:48:05 by chajax           ###   ########.fr       */
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
			vtr.push_back(rand() % 4000000);
		std::vector<int>::iterator	start = vtr.begin();
		std::vector<int>:: iterator	end = vtr.end();
		sp.addNumber(start, end);
		try { sp.addNumber(42); }
		catch (std::length_error e){ std::cout << e.what();  }
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;

		std::vector<int>			vtr2;
		Span						sp2(42);

		vtr2.push_back(1);
		vtr2.push_back(42000);
		vtr2.push_back(3);
		std::vector<int>::iterator	start2 = vtr2.begin();
		std::vector<int>:: iterator	end2 = vtr2.end();
		sp2.addNumber(start2, end2);
		std::cout << sp2.shortestSpan() << std::endl;
	}
}
