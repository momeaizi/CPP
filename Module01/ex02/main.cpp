/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 20:01:32 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/22 17:29:24 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string brain = "HI THIS IS BRAIN";
    std::string *stringPTR = &brain;
    std::string &stringREF = brain;


    std::cout << "\n\n    ADDRESSE\n\n";
    std::cout << &brain << std::endl;
    std::cout << stringPTR << std::endl;
    std::cout << &stringREF << std::endl;
    
    std::cout << "\n\n    VALUE\n\n";
    std::cout << brain << std::endl;
    std::cout << *stringPTR << std::endl;
    std::cout << stringREF << std::endl;
    
    return (0);
}