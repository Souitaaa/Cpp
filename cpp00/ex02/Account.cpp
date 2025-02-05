/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 21:39:15 by csouita           #+#    #+#             */
/*   Updated: 2025/02/05 16:41:37 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

// Define static member variables
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts( void ) 
{
    return _nbAccounts;
}

 int Account::getTotalAmount( void ) 
{
    return _totalAmount;
}

int Account::getNbDeposits( void ) 
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void ) 
{
    return _totalNbWithdrawals;
}

std::string getCurrentTime() {
    time_t now = time(0); 
    struct tm tstruct;
    char buf[20];

    tstruct = *localtime(&now);  
    strftime(buf, sizeof(buf), "[%Y%m%d_%H%M%S]", &tstruct);

    return std::string(buf);
} 

void Account::_displayTimestamp( void )
{
    std::cout << getCurrentTime() << " ";
}

void Account::displayAccountsInfos( void ) 
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << getNbAccounts() << ";total:" << getTotalAmount() << ";deposits:" << getNbDeposits() << ";withdrawals:" << getNbWithdrawals() << std::endl;
}


void Account::makeDeposit(int deposit )
{
    _totalAmount += deposit;
    _totalNbDeposits++;
    _amount += deposit;
    _nbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    _amount -= withdrawal;
    _nbWithdrawals++;
    return true;
}

int Account::checkAmount( void ) const
{
    return _amount;
}

void Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{   
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

