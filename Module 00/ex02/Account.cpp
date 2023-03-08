/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yagnaou <yagnaou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:46:54 by yagnaou           #+#    #+#             */
/*   Updated: 2022/11/15 18:37:11 by yagnaou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
# include <iostream>
# include <ctime>
# include <iomanip>

# define BLACK	"\033[1;30m"
# define GRAY	"\033[1;30m"
# define RED	"\033[1;31m"
# define GREEN	"\033[1;32m"
# define YELLOW	"\033[1;33m"
# define PURPLE	"\033[1;35m"
# define CYAN	"\033[1;36m"
# define RESET	"\033[0;0m"

int	Account::_nbAccounts(0);
int	Account::_totalAmount(0);
int	Account::_totalNbDeposits(0);
int	Account::_totalNbWithdrawals(0);

int	Account::getNbAccounts() { return (_nbAccounts); }
int	Account::getTotalAmount() { return (_totalAmount); }
int	Account::getNbDeposits() { return (_totalNbDeposits); }
int	Account::getNbWithdrawals() { return (_totalNbWithdrawals); }
int	Account::checkAmount() const { return (_amount); }

void	Account::_displayTimestamp() {

	time_t	now(time(0));
	tm		*tm(localtime(&now));

	std::cout << "["
	<< 1900 + tm->tm_year
	<< 1 + tm->tm_mon
	<< tm->tm_mday << '_'
	<< tm->tm_hour
	<< tm->tm_min
	<< tm->tm_sec
	<< "] ";
}

std::ostream& _show(int index, int amount, bool checker) {
	return std::cout << "index:" << index << (checker ? ";p_amount:" : ";amount:") << amount;
}

void	Account::displayAccountsInfos() {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
	<< ";total:" << _totalAmount
	<< ";deposits:" << _totalNbDeposits
	<< ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit )
	: _accountIndex(_nbAccounts++),
	_amount(initial_deposit),
	_nbDeposits(0), _nbWithdrawals(0) {
		_displayTimestamp();
		_show(_accountIndex, _amount, false) << ";created" << std::endl;
		_totalAmount += initial_deposit;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	_show(_accountIndex, _amount, true)
	<< ";deposit:" << deposit
	<< ";amount:" << _amount + deposit
	<< ";nb_deposits:" << ++_nbDeposits << std::endl;
	_amount += deposit;
	_totalAmount += deposit;
	++_totalNbDeposits;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	_show(_accountIndex, _amount, true);
	
	if (_amount - withdrawal < 0) {
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	std::cout << ";withdrawal:" << withdrawal
	<< ";amount:" << _amount - withdrawal
	<< ";nb_withdrawals:" << ++_nbWithdrawals << std::endl;
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	++_totalNbWithdrawals;
	return (true);
}

Account::~Account() {
	_displayTimestamp();
	_show(_accountIndex, _amount, false) << ";closed" << std::endl;
}

void	Account::displayStatus() const {
	_displayTimestamp();
	_show(_accountIndex, _amount, false)
	<< ";deposits:" << _nbDeposits
	<< ";withdrawals:" << _nbWithdrawals << std::endl;
}
