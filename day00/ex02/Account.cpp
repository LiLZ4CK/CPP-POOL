/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:06:59 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/03 11:17:49 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include  "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp( void )
{
	std::time_t time = std::time(NULL);
	std::tm *now = std::localtime(&time);
	std::cout << "[";
	std::cout << now->tm_year + 1900;
	if (now->tm_mon < 10)
		std::cout << '0' << now->tm_mon + 1;
	else
		std::cout << now->tm_mon + 1;
	if (now->tm_mday < 10)
		std::cout << '0' << now->tm_mday;
	else
		std::cout << now->tm_mday;
	std::cout << "_";
	if (now->tm_hour < 10)
		std::cout << '0' << now->tm_hour;
	else
		std::cout << now->tm_hour;
	if (now->tm_min < 10)
		std::cout << '0' << now->tm_min;
	else
		std::cout << now->tm_min;
	if (now->tm_sec < 10)
		std::cout << '0' << now->tm_sec;
	else
		std::cout << now->tm_sec - 1;
	std::cout << "] ";
	 
}

int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_amount = initial_deposit;
	_accountIndex = _nbAccounts;
	_nbWithdrawals = 0;
	_nbDeposits = 0;
	std::cout << "index:" << this->_accountIndex << ";amount:" << _amount << ";created" << std::endl;
	// _accountIndex++;
	_nbAccounts++;
	_totalAmount += _amount;

}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ":deposit:" << deposit;
	_amount += deposit;
	_totalAmount += deposit;
	_totalNbDeposits += 1;
	_nbDeposits++;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:" << _nbDeposits << std::endl;

}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex << ";p_amount:" << this->_amount << ";withdrawal:refused" << std::endl;
		return (false);
	}
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:" << withdrawal;
	_amount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << ";amount:" << _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int Account::checkAmount(void)const
{
	return _amount;
}

void Account::displayStatus(void)const
{

}

Account::Account()
{
	_accountIndex = 0;
}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}
