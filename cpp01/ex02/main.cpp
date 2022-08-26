/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/13 11:24:24 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/26 14:40:18 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main()
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "The memory address of the string variable is: " << &str <<
	"\nThe memory address held by stringPTR is: " << stringPTR <<
	"\nThe memory address held by stringREF is: " << &stringREF <<
	"\nThe value of the string variable is: " << str <<
	"\nThe value pointed to by stringPTR is: " << *stringPTR <<
	"\nThe alue pointed to by stringREF is: " << stringREF << '\n';
}
