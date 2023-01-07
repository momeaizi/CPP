/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/07 20:26:09 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/07 21:21:08 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
    std::cout << "Passwords: " << std::endl;
    
    std::string     passwords[] = {"123456", "123456789", "Qwerty", "Password", "12345", \
        "12345678", "111111", "1234567", "123123", "Qwerty123", "1q2w3e", "1234567890", \
        "DEFAULT", "0", "Abc123", "654321", "123321", "Qwertyuiop", "Iloveyou", "666666"};
    
    iter(passwords, 20, print);

    std::cout << "\n\n**********************************\n" << std::endl;



    std::cout << "Passwords length: " << std::endl;
    
    int     passwordLength[] = {6, 9, 6, 8, 5, 8, 6, 7, 6, 9, 6, 10, 7, 1, 6, 6, 6, 10, 8, 6};

    iter(passwordLength, 20, print);

    return 0;
}