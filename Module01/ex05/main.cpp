/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:41:22 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/22 18:05:40 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
    Harl harl1;
    Harl harl2;
    Harl harl3;

    harl1.complain("DEBUG");
    harl2.complain("INFO");
    harl2.complain("ERROR");
    harl3.complain("tttt");

    return 0;
}