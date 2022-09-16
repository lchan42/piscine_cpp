/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:00:28 by lchan             #+#    #+#             */
/*   Updated: 2022/09/16 12:53:43 by lchan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;


// ************************************************************************** //
//                                public	                                  //
// ************************************************************************** //

Account::Account (int initial_deposit) : _amount(initial_deposit) {
	this->_nbAccounts++;
	this->_totalAmount += initial_deposit;
	this->_accountIndex = this->_nbAccounts - 1;
	std::cout << "created" << std::endl;
}

int Account::getNbAccounts() {
	return (Account::_nbAccounts);
}

int Account::getTotalAmount() {
	return (Account::_nbAccounts);
}

int	Account::getNbDeposits() {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	int	nbaccount;

	std::cout 	<< "accounts:" << getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals() << std::endl;
	return ;
}


Account::~Account (void) {
	std::cout << "destructor ~Account Called" << std::endl;
}

Account::Account (void) {
	std::cout << "Called" << std::endl;
}

void	Account::makeDeposit( int deposit ){

	int	p_amount = this->checkAmount();

	this->_nbDeposits++;
	this->_amount += deposit;
	this->_totalNbDeposits++;
	this->_totalAmount += deposit;
	std::cout 	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << p_amount << ";"
				<< "deposit:" << deposit << ";"
				<< "amount:" << _amount << ";"
				<< "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){

	int	new_amount = this->checkAmount() - withdrawal;

	std::cout 	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << this->checkAmount() << ";"
				<< "withdrawal:";
	if (new_amount >= 0)
	{
		this->_nbWithdrawals++;
		this->_totalNbWithdrawals++;
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		std::cout	<< withdrawal << ";"
					<< "amount:" << _amount << ";"
					<< "nb_deposits:" << _nbDeposits << std::endl;
	}
	else
		std::cout << "refused" << std::endl;

}
int		Account::checkAmount( void ) const{
	return(_amount);
}
void	Account::displayStatus( void ) const{
	this->_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex << ";"
				<< "amount:" << _amount << ";"
				<< "deposits:" << _nbDeposits << ";"
				<< "withdrawals:" << _nbWithdrawals << std::endl;

}

/***************************************** private *****************************************/

void	Account::_displayTimestamp( void )
{
	time_t	now = time(0);
	tm 		*ltm = localtime(&now);

	std::cout << "[" << 1900 + ltm->tm_year;		//year
	if (1 + ltm->tm_mon < 10)

	std::cout << std::setfill('0') << std::setw(2)<< 1 + ltm->tm_mon;					//month
	std::cout << std::setfill('0') << std::setw(2)<< ltm->tm_mday;						//day
	std::cout << "_"<< 5+ltm->tm_hour;													//hour
	std::cout << std::setfill('0') << std::setw(2)<< 30+ltm->tm_min;					//min
	std::cout << std::setfill('0') << std::setw(2)<< ltm->tm_sec << "] "<< std::endl;	//sec

	return;
}
