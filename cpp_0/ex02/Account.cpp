/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:23:58 by yer-raki          #+#    #+#             */
/*   Updated: 2021/09/28 08:50:16 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <string.h>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( void )
{
	return;
}

Account::Account(int initial_deposit)
{
	this->_nbWithdrawals = 0;
	this->_nbDeposits = 0;
	this->_accountIndex = this->_nbAccounts;
	this->_amount = initial_deposit;
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";amount:" << this->_amount
				<< ";created\n";
	return;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";amount:" << this->_amount
				<< ";closed\n";
	return;
}

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}

void	Account::_displayTimestamp( void )
{
	time_t now = time(0);
	tm *ltm = localtime(&now);

	std::cout	<< "[" << 1900 + ltm->tm_year << 1 + ltm->tm_mon << ltm->tm_mday
				<< "_" << ltm->tm_hour << ltm->tm_min << ltm->tm_sec << "] ";
}

void	Account::makeDeposit( int deposit )
{
	this->_amount += deposit;
	this->_nbDeposits++;
	this->_totalAmount += deposit;
	this->_totalNbDeposits++;
	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";p_amount:" << this->_amount - deposit
				<< ";deposit:" << deposit << ";amount:" << this->_amount
				<< ";nb_deposits:" << this->_nbDeposits << "\n";
	
}

int		Account::checkAmount( void ) const
{
	return (this->_amount);
}

bool	Account::makeWithdrawal( int withdrawal )
{
	_displayTimestamp();
	if (this->_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		this->_totalAmount -= withdrawal;
		std::cout	<< "index:" << this->_accountIndex << ";p_amount:" << this->_amount + withdrawal
					<< ";withdrawal:" << withdrawal << ";amount:" << this->_amount
					<< ";nb_withdrawals:" << this->_nbWithdrawals << "\n";
		return (true);
	}
	else
	{
		std::cout	<< "index:" << this->_accountIndex << ";p_amount:" << this->_amount
					<< ";withdrawal:refused" << "\n";
		return (false);
	}
	return (true);
	
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << "\n";
}

void	Account::displayAccountsInfos( void )
{
	_displayTimestamp();
	std::cout	<< "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << "\n";
}