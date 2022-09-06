/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 16:42:21 by chajax            #+#    #+#             */
/*   Updated: 2022/09/06 10:57:46 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP
# include <iostream>

template <typename T>
void	iter(T *adr, size_t size, void(*fct)(T &ref))
{
	for (size_t i = 0; i < size; i++)
		fct(adr[i]);
	return ;
}

template <typename T>
void	iter(T const *adr, size_t  const size, void(*fct)(const T &ref))
{
	for (size_t i = 0; i < size; i++)
		fct(adr[i]);
	return ;
}
#endif
