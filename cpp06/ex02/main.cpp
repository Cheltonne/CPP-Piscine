/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:59:54 by chajax42          #+#    #+#             */
/*   Updated: 2022/09/04 22:11:00 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BeReal.hpp"

void	VeritableType() {

	Base	*test = generate();
	Base	&testRef = *test;

	identify(test);
	identify(testRef);

	std::cout << '\n';
	
	delete test;
}

int	main()
{
	VeritableType();
	return (0);
}
