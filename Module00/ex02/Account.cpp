/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:02:26 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/18 21:53:20 by momeaizi         ###   ########.fr       */
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

void	Account::displayAccountsInfos( void )
{
    std::cout << "[19920104_091532] accounts:" << _nbAccounts << ";total:" << _totalAmount << ";deposits:" << _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit ) : _accountIndex{ _nbAccounts }, _amount {initial_deposit}, _nbDeposits{ 0 }, _nbWithdrawals{ 0 }
{
    _nbAccounts++;
    _totalAmount += initial_deposit;
    std::cout << "[19920104_091532] index:" << _accountIndex << "amount:" << _amount << ";created\n";
}

Account::Account() : _accountIndex{ _nbAccounts }, _amount {0}, _nbDeposits{ 0 }, _nbWithdrawals{ 0 }
{
    _nbAccounts++;
    std::cout << "[19920104_091532] index:" << _accountIndex << "amount:" << _amount << ";created\n";
}

Account::~Account( void )
{
    std::cout << "[19920104_091532] index:" << _accountIndex << ";amount:" << _amount << ";closed\n";
}

void	Account::makeDeposit( int deposit )
{
    std::cout << "[19920104_091532] index:" << _accountIndex << "p_amount:" << _amount << ";deposit:" << deposit << ";amount:" << _amount + deposit << ";nb_deposits:" << _nbDeposits + 1 << std::endl;
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal )
{
    if (withdrawal > _amount)
    {
        std::cout << "[19920104_091532] index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:refused\n";
        return false;
    }
    std::cout << "[19920104_091532] index:" << _accountIndex << ";p_amount:" << _amount << ";withdrawal:" << withdrawal << ";amount:" << _amount - withdrawal << ";nb_withdrawals:" << _nbWithdrawals + 1 << std::endl;
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
    std::cout << "[19920104_091532] index:" << _accountIndex << ";amount:" << _amount << ";deposits:" << _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}