/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:41:22 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/21 19:50:07 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl1;
    Harl harl2;
    Harl harl3;

    harl1.complain("tttt");
    harl2.complain("tttt");
    harl3.complain("tttt");

    std::cout << reinterpret_cast<void*>(harl1.complain) << '\n'; // Tell C++ to interpret function foo as a void pointer

    return 0;
}