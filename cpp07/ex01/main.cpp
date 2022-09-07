/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 09:43:40 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 22:57:57 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

void	increment(int &i)
{
	i++;
	return ;
}

void	ft_putchar(const char &c)
{
	std::cout << c;
	return ;
}

int	main()
{
	int 		arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	const char* str = "Je me suis fait Blackhole haha *meurt*\n";

	std::cout << "BEFORE ITER: \n";
	for (size_t i = 0; i < 10; i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';

	iter(arr, 10, &increment);

	std::cout << "AFTER ITER: \n";
	for (size_t i = 0; i < 10; i++)
		std::cout << arr[i] << ' ';
	std::cout << '\n';

	iter(str, 39, &ft_putchar);
}
