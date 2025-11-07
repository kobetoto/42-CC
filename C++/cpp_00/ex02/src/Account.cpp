/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thodavid <thodavid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 13:29:41 by thodavid          #+#    #+#             */
/*   Updated: 2025/10/30 13:49:23 by thodavid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts;

int Account::_totalAmount;

int Account::_totalNbDeposits = 0;

int Account::_totalNbWithdrawals = 0;

/**
 * UTILS
 */
int Account::getNbAccounts(void)
{
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
    return (Account::_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{

    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts() << ";"
              << "total:" << Account::getTotalAmount() << ";"
              << "deposits:" << Account::getNbDeposits() << ";"
              << "withdrawals:" << Account::getNbWithdrawals() << '\n';
}

/**
 * CONST + DEST
 */
Account::Account(int initial_deposit)
{
    static int i = 0;
    static int t = 1;
    this->_accountIndex = i;
    this->_amount = initial_deposit;
    this->_nbAccounts = t;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << i << ";"
              << "amount:" << initial_deposit << ";"
              << "created" << '\n';
    _totalAmount += initial_deposit;
    i++;
    t++;
}

Account::~Account(void)
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";"
              << "closed" << '\n';
}

/**
 * DISPLAY INFOS + PROGR ENGINE
 */
void Account::makeDeposit(int deposit)
{
    this->_nbDeposits++;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "p_amount:" << this->_amount << ";"
              << "deposit:" << deposit << ";"
              << "amount:" << this->_amount + deposit << ";"
              << "nb_deposits:" << this->_nbDeposits << '\n';
    _totalAmount += deposit;
    this->_amount += deposit;
    _totalNbDeposits++;
}

bool Account::makeWithdrawal(int withdrawal)
{

    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "p_amount:" << checkAmount() << ";";
    if (withdrawal > this->_amount)
    {
        std::cout << "withdrawal:refused" << '\n';
        return (false);
    }
    else
    {
        this->_nbWithdrawals++;
        std::cout << "withdrawal:" << withdrawal << ";"
                  << "amount:" << this->_amount - withdrawal << ";"
                  << "nb_withdrawals:" << this->_nbWithdrawals << '\n';
        _totalAmount -= withdrawal;
        _totalNbWithdrawals++;
        this->_amount -= withdrawal;
        return (true);
    }
}

int Account::checkAmount(void) const
{
    return _amount;
}

void Account::displayStatus(void) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex << ";"
              << "amount:" << this->_amount << ";"
              << "deposits:" << this->_nbDeposits << ";"
              << "withdrawals:" << this->_nbWithdrawals << "\n";
}

void Account::_displayTimestamp(void)
{
    std::time_t now = std::time(NULL);
    std::tm *ltm = std::localtime(&now);

    std::cout << '['
              << (1900 + ltm->tm_year)
              << std::setw(2) << std::setfill('0') << (1 + ltm->tm_mon)
              << std::setw(2) << std::setfill('0') << ltm->tm_mday
              << '_'
              << std::setw(2) << std::setfill('0') << ltm->tm_hour
              << std::setw(2) << std::setfill('0') << ltm->tm_min
              << std::setw(2) << std::setfill('0') << ltm->tm_sec
              << "] ";
}
