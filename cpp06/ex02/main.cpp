/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:59:54 by chajax42          #+#    #+#             */
/*   Updated: 2022/09/05 13:10:32 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BeReal.hpp"

void	BeReal()
{
	Base	*test = generate();
	Base	&testRef = *test;

	std::cout << '\n';
	identify(test);
	identify(testRef);
	delete test;
}

int	main()
{
	BeReal();
	return (0);
}
