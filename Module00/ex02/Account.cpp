/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:02:26 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/19 13:00:52 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
    return _totalAmount;
}

int	Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}


void	Account::_displayTimestamp( void )
{
    // current date/time based on current system
    time_t  now = time(0);
    tm      *ltm = localtime(&now);

    std::cout << "[" << 1900 + ltm->tm_year;
    if (1 + ltm->tm_mon < 10)
        std::cout << '0';
    std::cout <<  1 + ltm->tm_mon ;
    if (ltm->tm_mday < 10)
        std::cout << '0';
    std::cout << ltm->tm_mday;
    std::cout << '_';
    if (ltm->tm_hour < 10)
        std::cout << '0';
    std::cout <<  ltm->tm_hour;
    if (ltm->tm_min < 10)
        std::cout << '0';
    std::cout <<  ltm->tm_min;
    if (ltm->tm_sec < 10)
        std::cout << '0';
    std::cout << ltm->tm_sec << "] ";
}

void	Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit ) : _accountIndex( _nbAccounts ), _amount ( initial_deposit ), _nbDeposits ( 0 ), _nbWithdrawals ( 0 )
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::Account() : _accountIndex ( _nbAccounts ), _amount  (0), _nbDeposits ( 0 ), _nbWithdrawals ( 0 )
{
    _nbAccounts++;
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created\n";
}

Account::~Account( void )
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

void	Account::makeDeposit( int deposit )
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits + 1 << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    Account::_displayTimestamp();
    if (withdrawal > _amount)
    {
        std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
        return false;
    }
    std::cout << "index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
    _amount -= withdrawal;
    _totalAmount -= withdrawal;
    _nbWithdrawals++;
    _totalNbWithdrawals++;
    return true;
}

int		Account::checkAmount( void ) const
{
    return _amount;
}

void	Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}