/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BeReal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:56:42 by chajax42          #+#    #+#             */
/*   Updated: 2022/09/04 21:59:27 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BEREAL_HPP
# define BEREAL_HPP

# include <string>
# include <cstdlib>
# include <iostream>
# include "colors.hpp"

class	Base
{
	public:
		virtual ~Base();
};

class	A: public Base {};

class	B: public Base {};

class	C: public Base {};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

#endif
