/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yer-raki <yer-raki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/25 08:23:58 by yer-raki          #+#    #+#             */
/*   Updated: 2021/09/26 17:51:08 by yer-raki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <string.h>

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	std::cout	<< "index:" << this->_accountIndex << ";amount:" << this->_amount
				<< ";created\n";
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	return;
}

Account::~Account()
{
	std::cout	<< "index:" << this->_accountIndex << ";amount:" << this->_amount
				<< ";closed\n";
	return;
}

Account::Account( void )
{
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
	std::time_t t = std::time(0);
    std::cout << t;
}

void	Account::makeDeposit( int deposit )
{
	std::cout	<< "index:" << this->_accountIndex << ";p_amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits << ";amount:" << this->_amount + deposit
				<< ";nb_deposits:" << this->_nbDeposits << "\n";
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += this->_amount;
	
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout	<< "index:" << this->_accountIndex << ";p_amount:" << this->_amount
				<< ";withdrawal:" << this->_nbWithdrawals << ";amount:" << this->_amount + withdrawal
				<< ";nb_withdrawals:" << this->_nbWithdrawals << "\n";
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	_totalAmount -= this->_amount;
	// checkAmount()
	
	
}

void	Account::displayStatus( void ) const
{
	std::cout	<< "index:" << this->_accountIndex << ";amount:" << this->_amount
				<< ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	std::cout	<< "accounts:" << getNbAccounts() << ";total:" << getTotalAmount()
				<< ";deposits:" << getNbDeposits << ";withdrawals:" << getNbWithdrawals();
}