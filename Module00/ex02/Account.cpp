/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:28:15 by skelly            #+#    #+#             */
/*   Updated: 2022/01/18 14:12:14 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;
//---------------------------------------------------------
int Account::checkAmount(void) const
{
	return(this->_amount);
}
//---------------------------------------------------------
//getNbAccounts
//getTotalAmount
//getNbDeposits
//getNbWithdrawals
int Account::getNbAccounts(void)
{
	return(_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return(_totalAmount);
}

int Account::getNbDeposits(void)
{
	return(_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return(_totalNbWithdrawals);
}
//---------------------------------------------------------------
Account::Account(int initial_deposit)
{
//строка 1 - 8
	this->_amount = initial_deposit;
	this->_accountIndex = this->_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts ++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}

Account::~Account()
{
//52 - 59
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout  << ";closed" << std::endl;
}
//-----------------------------------------------------------------------
void Account::_displayTimestamp(void)
{
	std::time_t t;
	char	time[100];

	t = std::time(nullptr);
	std::strftime(time, sizeof(time), "[%Y%m%d_%H%M%S] ", std::localtime(&t));
	std::cout << time;
}
//------------------------------------------------------------------------
//displayAccountsInfos
//displayStatus
//makeDeposit
//makeWithdrawal

void Account::displayAccountsInfos(void)
{
//строка 9; 26; 43 - accounts:8;total:20049;deposits:0;withdrawals:0
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits ;
	std::cout << ";withdrawals:" <<_totalNbWithdrawals << std::endl;	
}

void Account::displayStatus(void) const
{//10-17; 27-34; 44-51
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals <<std::endl;
}

void Account::makeDeposit(int deposit)
{//18-25; 
	this->_amount += deposit;
	this->_nbDeposits += 1;
	_totalNbDeposits += 1;
	_totalAmount += deposit;

	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->_amount - deposit;
	std::cout << ";deposit:" << deposit;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout <<std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{//35-42; 
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" <<this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return(0);
	}
	this->_amount-= withdrawal;
	this->_nbWithdrawals += 1;
	_totalNbWithdrawals += 1;
	_totalAmount -= withdrawal;
	
	std::cout << ";withdrawal:" << withdrawal;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return(1);
}