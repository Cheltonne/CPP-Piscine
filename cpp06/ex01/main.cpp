/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:49:59 by chajax42          #+#    #+#             */
/*   Updated: 2022/09/06 09:11:13 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

int main(void)
{
	Data data;

	data.Int = 42;
	data.intPtr = &data.Int;
	data.Str = "Chelton";

	std::cout << L_YELLOW << "BEFORE SERIALIZATION: \n" << RESET;
	std::cout << L_GREEN << "Int = " << data.Int << L_PINK << "\nintPtr = " << data.intPtr << L_CYAN << "\nStr = " << data.Str << '\n' << RESET;
	std::cout << WHITE << "Data address is: " << &data << '\n' << RESET;
	
	uintptr_t raw = serialize(&data);

	Data *new_data = deserialize(raw);

	std::cout << L_YELLOW << "\nAFTER SERIALIZATION: \n" << RESET;
	std::cout << L_GREEN << "Int = " << new_data->Int << L_PINK << "\nintPtr = " << new_data->intPtr << L_CYAN << "\nStr = " << new_data->Str << '\n' << RESET;
	std::cout << WHITE << "new_data address is: " << new_data << '\n' << RESET;
}
