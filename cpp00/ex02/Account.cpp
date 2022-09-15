/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lchan <lchan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 18:00:28 by lchan             #+#    #+#             */
/*   Updated: 2022/09/15 19:16:10 by lchan            ###   ########.fr       */
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


Account::Account (int initial_deposit) {
	std::cout << "constructor Account Called" << std::endl;
}

int Account::getNbAccounts() {
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
	return ;
}

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
	std::cout << std::setfill('0') << std::setw(2)<< ltm->tm_sec << "]"<< std::endl;	//sec

	return;
}

Account::~Account (void) {
	std::cout << "destructor ~Account Called" << std::endl;
}

Account::Account (void) {
	std::cout << "Called" << std::endl;
}
