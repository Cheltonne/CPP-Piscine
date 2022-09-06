/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 11:42:03 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 12:52:59 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int	main(void)
{
	Array<int>	emptyArr;
	std::cout << "empyArr " <<
		(emptyArr.size() == 0 ? "is empty" : "is not empty") << '\n';

	std::cout << '\n';

	Array<int>	intArr(4);
	std::cout << "Size of intArr..." << intArr.size() << '\n';

	std::cout << "Value of intArr[0]: " << intArr[0] << '\n';
	intArr[0] = 1;
	intArr[1] = 2;
	intArr[2] = 3;
	intArr[3] = 4;
	std::cout << "Size of intArr..." << intArr.size() << '\n';

	std::cout << '\n';

	std::cout << "\033[36mTrying below min index...\033[0m" << '\n';
	try{ std::cout << intArr[-42] << '\n'; }
	catch (std::exception &e){ std::cout << e.what() << '\n'; }

	std::cout << '\n';

	std::cout << "\033[36mTrying beyond max index...\033[0m" << '\n';
	try { std::cout << intArr[42] << '\n'; }
	catch (std::exception &e){ std::cout << e.what() << '\n'; }

	std::cout << '\n';

	for (size_t i(0); i < intArr.size(); ++i)
	{
		try { std::cout << "intArr[" << i << "]: " << intArr[i] << '\n'; }
		catch (std::exception &e) { std::cout << e.what() << '\n'; }
	}

	std::cout << '\n';

	Array<int>	cpyArr;
	std::cout << "Size of cpyArr..." << cpyArr.size() << '\n';
	std::cout << "\033[36mDeep copying intArr to cpyArr...\033[0m" << '\n';
	cpyArr = intArr;
	std::cout << "New _size of cpyArr..." << cpyArr.size() << '\n';

	std::cout << "\033[36mChanging value in cpyArr...\033[0m" << '\n';
	cpyArr[1] = 42;
	for (size_t i(0); i < intArr.size(); ++i)
	{
		try { std::cout << "cpyArr[" << i << "]: " << cpyArr[i] << '\n'; }
		catch (std::exception &e) { std::cout << e.what() << '\n'; }
	}

	std::cout << '\n';

	std::cout << "\033[36mChecking if intArray has been modified...\033[0m" << '\n';
	for (size_t i(0); i < intArr.size(); ++i)
	{
		try { std::cout << "intArr[" << i << "]: " << intArr[i] << '\n'; }
		catch (std::exception &e) { std::cout << e.what() << '\n'; }
	}

	std::cout << '\n';
	return 0;
}
