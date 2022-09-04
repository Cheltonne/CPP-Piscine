/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:48:53 by chajax42          #+#    #+#             */
/*   Updated: 2022/09/04 21:48:55 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include <cstdlib>
# include <stdint.h>
# include "colors.hpp"

typedef struct s_data
{
	int			Int;
	void		*intPtr;
	std::string	Str;
} Data;

uintptr_t	serialize(Data* ptr);
Data		*deserialize(uintptr_t raw);

#endif
