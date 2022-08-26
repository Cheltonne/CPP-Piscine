/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:43:41 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/24 17:35:03 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called\n";
	this->_rawBits = 0;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called\n";
	return ;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called\n";
	this->_rawBits = nb << _fBits;
	return ;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called\n";
	this->_rawBits = (int)(roundf(nb * (1 << this->_fBits)));
	return ;
}

Fixed::Fixed(const Fixed &val)
{
	std::cout << "Copy constructor called\n";
	this->_rawBits = val.getRawBits();
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called\n";
	return (this->_rawBits);
}

void	Fixed::setRawBits(int const raw)
{
	this->_rawBits = raw;
}

int	Fixed::toInt(void) const
{
	return (this->_rawBits >> this->_fBits);
}

float	Fixed::toFloat(void) const
{
	return ((float)this->_rawBits / (1 << this->_fBits));
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Copy assignment operator called\n";
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}
