/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 22:43:41 by chajax42          #+#    #+#             */
/*   Updated: 2022/08/26 15:50:14 by chajax           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

//////////////////CONSTRUCTORS & DESTRUCTOR\\\\\\\\\\\\\\\\\\\\\

Fixed::Fixed(void)
{
	//std::cout << "Default constructor called\n";
	this->_rawBits = 0;
	return ;
}

Fixed::~Fixed(void)
{
	//std::cout << "Destructor called\n";
	return ;
}

Fixed::Fixed(const int nb)
{
	//std::cout << "Int constructor called\n";
	this->_rawBits = nb << _fBits;
	return ;
}

Fixed::Fixed(const float nb)
{
	//std::cout << "Float constructor called\n";
	this->_rawBits = (int)(roundf(nb * (1 << this->_fBits)));
	return ;
}

Fixed::Fixed(const Fixed &val)
{
	//std::cout << "Copy constructor called\n";
	this->_rawBits = val.getRawBits();
}


int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called\n";
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

//////////////////////OPERATOR OVERLOADS\\\\\\\\\\\\\\\\\\\\\\\\\

Fixed &Fixed::operator=(Fixed const &rhs)
{
	//std::cout << "Copy assignment operator called\n";
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

/////////comparisons\\\\\\\\\\\\

std::ostream &operator<<(std::ostream &o, Fixed const &rhs)
{
	o << rhs.toFloat();
	return (o);
}

bool	Fixed::operator>(Fixed const &rhs) const
{
	if (this->getRawBits() > rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<(Fixed const &rhs) const
{
	if (this->getRawBits() < rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator>=(Fixed const &rhs) const
{
	if (this->getRawBits() >= rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator<=(Fixed const &rhs) const
{
	if (this->getRawBits() <= rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator==(Fixed const &rhs) const
{
	if (this->getRawBits() == rhs.getRawBits())
		return (true);
	else
		return (false);
}

bool	Fixed::operator!=(Fixed const &rhs) const
{
	if (this->getRawBits() != rhs.getRawBits())
		return (true);
	else
		return (false);
}
		
///////////arithmetics\\\\\\\\\\\\\\\\

Fixed	Fixed::operator+(Fixed const &rhs)
{
	return (Fixed(this->getRawBits() + rhs.getRawBits()));
}

Fixed	Fixed::operator-(Fixed const &rhs)
{
	return (Fixed(this->getRawBits() - rhs.getRawBits()));
}

Fixed	Fixed::operator*(Fixed const &rhs)
{
	return (Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed	Fixed::operator/(Fixed const &rhs)
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}

////////////increments & decrements\\\\\\\\\\

Fixed	&Fixed::operator++(void)
{
	float	tmp = this->toFloat();
	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed 	ret(*this);
	operator++();
	return (ret);
}

Fixed	&Fixed::operator--(void)
{
	float	tmp = this->toFloat();
	this->_rawBits--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed 	ret(*this);
	operator--();
	return (ret);
}

//////////////MIN & MAX\\\\\\\\\\\\\\\\\\\\\\\

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::min(const Fixed  &a, const Fixed &b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

Fixed const	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}
