/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:06:55 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/04 11:13:29 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

const char  *Intern::FormDoesNotExist::what() const _NOEXCEPT
{
    return "Form doesn\'t exist!";
}


Intern::Intern()
{
    // std::cout << "Inter default constructor" << std::endl;
}

Intern::Intern(const Intern &intern)
{
    // std::cout << "Inter copy constructor" << std::endl;
    (void) intern;
}

Intern  &Intern::operator=(const Intern &intern)
{
    // std::cout << "Inter copy assignement operator" << std::endl;
    (void) intern;
    return *this;
}

Intern::~Intern()
{
    std::cout << "Inter destructor" << std::endl;
}




Form    *Intern::makeForm(const std::string &formName, const std::string &target)
{
    const std::string   formNames[3] = {"ShrubberyCreationForm", "PresidentialPardonForm", "RobotomyRequestForm"};
    Form                *forms[3] = {new ShrubberyCreationForm(target), new PresidentialPardonForm(target), new RobotomyRequestForm(target)};
    int                 index = -1;

    for (int i = 0; i < 3; i++)
    {
        if (formName == formNames[i])
            index = i;
        else
            delete forms[i];
    }

    if (index == -1)
        throw FormDoesNotExist();
        
    std::cout << "Intern creates " << formName << std::endl;
    return forms[index];
}