/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:28:35 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/31 18:07:13 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
GradeTooHighException    Bureaucrat::gradeTooHighException;
GradeTooLowException     Bureaucrat::gradeTooLowException;

Bureaucrat::Bureaucrat() : name ("----"), grade (150)
{
    std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name (name)
{
    std::cout << "Bureaucrat parametrize constructor" << std::endl;
    if (grade < 1)
        throw gradeTooHighException;
    if (grade > 150)
        throw gradeTooHighException;
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bc) : name (bc.name), grade (bc.grade)
{
    std::cout << "Bureaucrat copy constructor" << std::endl;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &bc)
{
    std::cout << "Bureaucrat copy assignement operator" << std::endl;
    this->grade = bc.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat destructor" << std::endl;
}

const std::string   &Bureaucrat::getName()
{
    return name;
}

int                 Bureaucrat::getGrade()
{
    return grade;
}

std::ostream    &operator<<(std::ostream &os, Bureaucrat &bc)
{
    os << bc.getName() << ", bureaucrat grade " << bc.getGrade();
    return os;
}


void    Bureaucrat::increment()
{
    if (grade == 1)
        throw gradeTooHighException;
    grade--;
}

void    Bureaucrat::decrement()
{
    if (grade == 150)
        throw gradeTooHighException;
    grade++;
}












const char* GradeTooHighException::what() const _NOEXCEPT
{
    return "grade is too high!";
}

const char* GradeTooLowException::what() const _NOEXCEPT
{
    return "grade is too low!";
}