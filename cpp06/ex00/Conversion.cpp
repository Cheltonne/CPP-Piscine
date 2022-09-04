/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax42 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 20:20:18 by chajax42          #+#    #+#             */
/*   Updated: 2022/09/04 21:45:55 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion(char const *str)
{
	this->_charDisp = DISPLAYABLE;
	this->_intDisp = DISPLAYABLE;
	timeToConvert(str);
	return ;
}

Conversion::Conversion(Conversion const &src)
{
	*this = src;
	return ;
}

Conversion::~Conversion()
{
	return ;
}

Conversion	&Conversion::operator=(Conversion const &rhs)
{
	this->_charVal = rhs._charVal;
	this->_intVal = rhs._intVal;
	this->_floatVal = rhs._floatVal;
	this->_doubleVal = rhs._doubleVal;
	this->_charDisp = rhs._charDisp;
	this->_intDisp = rhs._intDisp;
	return (*this);
}

char	Conversion::getCharVal() const
{
	return (this->_charVal);
}

int		Conversion::getIntVal() const
{
	return (this->_intVal);
}

float	Conversion::getFloatVal() const
{
	return (this->_floatVal);
}

double	Conversion::getDoubleVal() const
{
	return (this->_doubleVal);
}

int		Conversion::getCharDisp() const
{
	return (this->_charDisp);
}

int		Conversion::getIntDisp() const
{
	return (this->_intDisp);
}

void	Conversion::checkNoProblem(void)
{
	double	Double = this->getDoubleVal();

	if (std::isnan(Double) || std::isinf(Double)
		|| Double < INT_MIN || Double > INT_MAX)
	{
		this->_intDisp = IMPOSSIBLE;
		this->_charDisp = IMPOSSIBLE;
	}
	else if (Double < CHAR_MIN || Double > CHAR_MAX)
		this->_charDisp = IMPOSSIBLE;
	else if (!std::isprint(this->getCharVal()))
		this->_charDisp = NOT_DISPLAYABLE;
}

bool	Conversion::convertChar(char const *str)
{
	if (str[0] && !str[1] && std::isprint(str[0]))
	{
		this->_charVal = str[0];
		this->_intVal = static_cast<int>(this->_charVal);
		this->_floatVal = static_cast<float>(this->_charVal);
		this->_doubleVal = static_cast<double>(this->_charVal);
		return (true);
	}
	return (false);
}

bool	Conversion::convertInt(char const *str)
{
	long int	Int;
	char		*endptr;

	endptr = NULL;
	Int = strtol(str, &endptr, 10);
	if (!*endptr && Int >= INT_MIN && Int <= INT_MAX)
	{
		this->_intVal = static_cast<int>(Int);
		this->_charVal = static_cast<char>(this->_intVal);
		this->_floatVal = static_cast<float>(this->_intVal);
		this->_doubleVal = static_cast<double>(this->_intVal);
		return (true);
	}
	return (false);
}

bool	Conversion::convertFloat(char const *str)
{
	float	Float;
	char	*endptr;

	endptr = NULL;
	Float = strtof(str, &endptr);
	if (*endptr == 'f' && (*(endptr + 1)))
	{
		this->_floatVal = Float;
		this->_charVal = static_cast<char>(this->_floatVal);
		this->_intVal = static_cast<int>(this->_floatVal);
		this->_doubleVal = static_cast<double>(this->_floatVal);
		return (true);
	}
	return (false);
}

bool	Conversion::convertDouble(char const *str)
{
	double	Double;
	char	*endptr;

	endptr = NULL;
	Double = strtod(str, &endptr);
	if (!*endptr)
	{
		this->_doubleVal = Double;
		this->_charVal = static_cast<char>(this->_doubleVal);
		this->_intVal = static_cast<char>(this->_doubleVal);
		this->_floatVal = static_cast<char>(this->_doubleVal);
		return (true);
	}
	return (false);
}

void	Conversion::timeToConvert(char const *str)
{
	bool (Conversion::*convert[4])(char const *str) =
	{
		&Conversion::convertInt,
		&Conversion::convertFloat,
		&Conversion::convertDouble,
		&Conversion::convertChar,
	};
	for (int i = 0; i < 4; i++)
	{
		if ((this->*convert[i])(str))
			return (checkNoProblem());
	}
	this->_charDisp = IMPOSSIBLE;
	this->_intDisp = IMPOSSIBLE;
	this->_floatVal = NAN;
	this->_doubleVal = NAN;
}

void	Conversion::display() const
{
	std::cout << BLUE_B << "Char   : " << RESET;
	if (this->getCharDisp() == NOT_DISPLAYABLE)
		std::cout << PINK_C << "Non displayable" << RESET << '\n';
	else if (this->getCharDisp() == IMPOSSIBLE)
		std::cout << RED_C << "Impossible" << RESET << '\n';
	else
		std::cout << YELLOW_B << "\'" << this->getCharVal() << "\'" << RESET << '\n';
	std::cout << SKY_B << "Int    : " << RESET;
	if (this->getIntDisp() == IMPOSSIBLE)
		std::cout << RED_C << "Impossible" << RESET << '\n';
	else
		std::cout << YELLOW_B << this->getIntVal() << RESET << '\n';
	std::cout << GREEN_B << "Float  : " << RESET << YELLOW_B << this->getFloatVal() << "f" << RESET << '\n';
	std::cout << PINK_B << "Double : " << RESET << YELLOW_B << this->getDoubleVal() << RESET << '\n';
	std::cout << '\n' << '\n' << '\n';
}
