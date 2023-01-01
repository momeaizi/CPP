/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 17:28:29 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/01 17:56:22 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form ("RobotomyRequestForm", 72, 45), target ("----")
{
    // std::cout << "RobotomyRequestForm default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form ("RobotomyRequestForm", 72, 45), target (target)
{
    // std::cout << "RobotomyRequestForm parametrize constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &roboto) : Form ("RobotomyRequestForm", 72, 45), target (roboto.target)
{
    // std::cout << "RobotomyRequestForm copy constructor" << std::endl;
}

RobotomyRequestForm   &RobotomyRequestForm::operator=(const RobotomyRequestForm &roboto)
{
    // std::cout << "RobotomyRequestForm copy assignement operator" << std::endl;
    this->target = roboto.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    // std::cout << "RobotomyRequestForm destructor" << std::endl;
}

void    RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    this->beExecuted(executor);
    /*
        execute
    */

}
