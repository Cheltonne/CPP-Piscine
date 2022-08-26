/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chajax <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 15:15:11 by chajax            #+#    #+#             */
/*   Updated: 2022/08/12 12:23:42 by chajax42         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int	i = 0;
int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	time_t 		timer;
	struct tm	*tm;

	time(&timer);
	tm = gmtime(&timer);
	std::cout << '[' << tm->tm_year + 1900 << tm->tm_mon << tm->tm_mday << 
	'_' << tm->tm_hour + 2 << tm->tm_min << tm->tm_sec << ']';
//	std::cout << "[19920104_091532]";
}

Account::Account(int initial_deposit)
{
	this->_accountIndex = i++;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_nbAccounts = i;
	this->_amount = initial_deposit;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" <<
	this->_amount << ";created\n";
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:" << 
	this->_accountIndex << ";amount:" << this->_amount << ";closed\n";
}

void	Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << getNbAccounts() << ";total:" << 
	getTotalAmount() << ";deposits:" << getNbDeposits()
	<< ";withdrawals:" << getNbWithdrawals() << "\n";
}

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

void	Account::displayStatus(void) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" <<
	this->_amount << ";deposits:" << this->_nbDeposits <<
	";withdrawals:" << this->_nbWithdrawals << "\n";
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount = this->_amount;

	this->_nbDeposits++;
	this->_amount += deposit;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" <<
	p_amount << ";deposit:" << deposit << ";amount:" << this->_amount 
	<< ";nb_deposits:" << this->_nbDeposits << "\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
	int	p_amount = this->_amount;

	if ((this->_amount - withdrawal) < 0)
	{
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" <<
		p_amount << ";withdrawal:refused\n";
		return (false);
	}
	else
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		Account::_displayTimestamp();
		std::cout << " index:" << this->_accountIndex << ";p_amount:" <<
		p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << '\n';
		return (true);
	}
}
