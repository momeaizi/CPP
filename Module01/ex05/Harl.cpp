/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:46:18 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/26 10:54:57 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <stdio.h>

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n";
}
void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn\'t put enough bacon in my burger! If you did, I wouldn\'t be asking for more!\n";
}
void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I\'ve been coming for years whereas you started working here since last month.\n";
}
void    Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.\n";
}

void    Harl::complain( std::string level )
{
    void (Harl::*harlFcnt[])( void ) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;
    
    for (int i = 0; i < 4; i++)
        if (level == levels[i])
            index = i;
    if (index == -1)
        std::cout << "[ Probably complaining about insignificant problems ]\n";
    else
        (this->*harlFcnt[index])();
}
