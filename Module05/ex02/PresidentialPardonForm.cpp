/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:37:09 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/01 17:44:02 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form ("PresidentialPardonForm", 25, 5), target ("----")
{
    // std::cout << "PresidentialPardonForm default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : Form ("PresidentialPardonForm", 25, 5), target (target)
{
    // std::cout << "PresidentialPardonForm parametrize constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &president) : Form ("PresidentialPardonForm", 25, 5), target (president.target)
{
    // std::cout << "PresidentialPardonForm copy constructor" << std::endl;
}

PresidentialPardonForm   &PresidentialPardonForm::operator=(const PresidentialPardonForm &president)
{
    // std::cout << "PresidentialPardonForm copy assignement operator" << std::endl;
    this->target = president.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    // std::cout << "PresidentialPardonForm destructor" << std::endl;
}

void    PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    this->beExecuted(executor);
    std::cout << target << "has been pardoned by Zaphod Beeblebrox." << std::endl;
}
