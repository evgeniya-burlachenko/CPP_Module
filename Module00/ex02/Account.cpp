/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skelly <skelly@student.21-school.ru>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:28:15 by skelly            #+#    #+#             */
/*   Updated: 2022/02/09 16:11:02 by skelly           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;//кол-во счетов
int Account::_totalAmount = 0;//общая сумма
int Account::_totalNbDeposits = 0;//глобальные депозиты
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

//---------------------------------------------------------------
Account::Account(int initial_deposit)
{
//строка 1 - 8 - первые 8 строк
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

Account::Account(void)
{
//строка 1 - 8 - первые 8 строк
	this->_amount = 0;
	this->_accountIndex = this->_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_nbAccounts ++;
	_totalAmount += this->_amount;
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";created" << std::endl;
}
Account::~Account()
{
//52 - 59 последние 8 строк
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout  << ";closed" << std::endl;
}
//-----------------------------------------------------------------------
void	Account::_displayTimestamp(void)//вывод времени
{
	std::time_t t;
	char	time[100];

	t = std::time(NULL);
	std::strftime(time, sizeof(time), "[%Y%m%d_%H%M%S] ", std::localtime(&t));
	std::cout << time;
}
//------------------------------------------------------------------------

void	Account::displayAccountsInfos(void)
{
//распечатывает информацию обо всех счетах
//строка 9; 26; 43 - accounts:8;total:20049;deposits:0;withdrawals:0
//test.cpp - 40 50 60
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts;
	std::cout << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits ;
	std::cout << ";withdrawals:" <<_totalNbWithdrawals << std::endl;	
}

void	Account::displayStatus(void) const
{
	//статус конкретного счета
	//10-17; 27-34; 44-51
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals <<std::endl;
}

void	Account::makeDeposit(int deposit)
{	//сделать пополнение
	//18-25; 
	this->_amount += deposit;
	this->_nbDeposits += 1;//кол-во депозитов
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

bool	Account::makeWithdrawal(int withdrawal)
{	//снятие
	//35-42; 
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" <<this->_amount;
	//проверка на то, что сумма снятия доступна 35, 40
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
