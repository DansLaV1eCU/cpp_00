/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danslav1e <danslav1e@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 17:37:54 by danslav1e         #+#    #+#             */
/*   Updated: 2025/07/25 21:53:01 by danslav1e        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ) {
    this->_amount = initial_deposit;
    this->_accountIndex = Account::_nbAccounts;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    
    Account::_nbAccounts++;
    Account::_totalAmount += initial_deposit;

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
        << ";amount:" << this->_amount
        << ";created" << std::endl;
}

Account::~Account( void ) {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
        << ";amount:" << this->_amount
        << ";closed" << std::endl;
}

int	Account::getNbAccounts( void ) {
    return Account::_nbAccounts;
}

int	Account::getTotalAmount( void ) {
    return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
    return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
    return Account::_totalNbWithdrawals;
}

void	Account::makeDeposit( int deposit ) {
    this->_amount += deposit;
    this->_nbDeposits++;

    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
        << ";p_amount:" << this->_amount - deposit
        << ";deposit:" << deposit
        << ";amount:" << this->_amount
        << ";nb_deposits:" << this->_nbDeposits
        << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
    if (withdrawal > this->_amount) {
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex
        << ";p_amount:" << this->_amount
        << ";withdrawal:refused" << std::endl;

        return false;
    }
    this->_amount -= withdrawal;
    this->_nbWithdrawals++;

    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
        << ";p_amount:" << this->_amount + withdrawal
        << ";withdrawal:" << withdrawal
        << ";amount:" << this->_amount
        << ";nb_withdrawals:" << this->_nbWithdrawals
        << std::endl;

    return true;
}

int		Account::checkAmount( void ) const {
    return this->_amount;
}

void	Account::displayAccountsInfos( void ) {
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::_nbAccounts
    << ";total:" << Account::_totalAmount
    << ";deposits:" << Account::_totalNbDeposits
    << ";withdrawals:" << Account::_totalNbWithdrawals
    << std::endl;
}

void	Account::displayStatus( void ) const {
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex
        << ";amount:" << this->_amount
        << ";deposits:" << this->_nbDeposits
        << ";withdrawals:" << this->_nbWithdrawals
        << std::endl;
}

void	Account::_displayTimestamp( void ) {
	std::time_t	now = std::time(0);
	std::tm*	ltm = std::localtime(&now);

	std::cout << "["
		<< 1900 + ltm->tm_year
		<< std::setw(2) << std::setfill('0') << ltm->tm_mon + 1
		<< std::setw(2) << std::setfill('0') << ltm->tm_mday << "_"
		<< std::setw(2) << std::setfill('0') << ltm->tm_hour
		<< std::setw(2) << std::setfill('0') << ltm->tm_min
		<< std::setw(2) << std::setfill('0') << ltm->tm_sec
		<< "] ";
}