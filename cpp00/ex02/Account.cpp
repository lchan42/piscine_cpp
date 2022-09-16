/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:00:28 by lchan             #+#    #+#             */
/*   Updated: 2022/09/16 14:51:43 by lchan            ###   ########.fr       */
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
int Account::getNbAccounts() {
	return (_nbAccounts);
}

int Account::getTotalAmount() {
	return (_totalAmount);
}

int	Account::getNbDeposits() {
	return (_totalNbDeposits);
}

int	Account::getNbWithdrawals() {
	return (_totalNbWithdrawals);
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();

	std::cout 	<< "accounts:" << getNbAccounts() << ";"
				<< "total:" << getTotalAmount() << ";"
				<< "deposits:" << getNbDeposits() << ";"
				<< "withdrawals:" << getNbWithdrawals() << std::endl;
	return ;
}

Account::Account (int initial_deposit) : _amount(initial_deposit) {
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_accountIndex = this->_nbAccounts - 1;

	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "created" << std::endl;
}

Account::~Account (void) {
	this->_nbAccounts--;
	this->_totalAmount -= _amount;
	_nbAccounts--;

	_displayTimestamp();
	std::cout	<< "index:" << this->_accountIndex << ";"
				<< "amount:" << this->_amount << ";"
				<< "closed" << std::endl;
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
	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << p_amount << ";"
				<< "deposit:" << deposit << ";"
				<< "amount:" << _amount << ";"
				<< "nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ){

	int	new_amount = this->checkAmount() - withdrawal;

	_displayTimestamp();
	std::cout 	<< "index:" << _accountIndex << ";"
				<< "p_amount:" << this->checkAmount() << ";"
				<< "withdrawal:";
	if (new_amount >= 0)
	{
		this->_nbWithdrawals++;
		this->_amount -= withdrawal;
		this->_totalNbWithdrawals++;
		this->_totalAmount -= withdrawal;
		std::cout	<< withdrawal << ";"
					<< "amount:" << _amount << ";"
					<< "nb_withdrawals:" << _nbWithdrawals << std::endl;
		return (1);
	}
	else
		std::cout << "refused" << std::endl;
	return (0);

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

// ************************************************************************** //
//                                private	                                  //
// ************************************************************************** //
void	Account::_displayTimestamp( void )
{
	time_t	now = time(0);
	tm 		*ltm = localtime(&now);

	std::cout	<< "[" << 1900 + ltm->tm_year
				<< std::setfill('0') << std::setw(2)<< 1 + ltm->tm_mon					//month
				<< std::setfill('0') << std::setw(2)<< ltm->tm_mday
				<< "_"<< ltm->tm_hour
				<< std::setfill('0') << std::setw(2)<< ltm->tm_min
				<< std::setfill('0') << std::setw(2)<< ltm->tm_sec << "] ";
	// std::cout << "[19920104_091532] "; //for the correction;
	return;
}
