/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:47:55 by chajax42          #+#    #+#             */
/*   Updated: 2022/09/04 21:48:12 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialization.hpp"

uintptr_t	serialize(Data* ptr)
{
	uintptr_t serializeDataPtr;

	serializeDataPtr = reinterpret_cast<uintptr_t>(ptr);
	return (serializeDataPtr);
}

Data	*deserialize(uintptr_t raw)
{
	Data	*deserializeDataPtr;

	deserializeDataPtr = reinterpret_cast<Data *>(raw);
	return (deserializeDataPtr);
}
