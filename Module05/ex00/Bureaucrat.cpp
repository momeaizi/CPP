/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:28:35 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/01 12:58:56 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name ("----"), grade (150)
{
    std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name (name)
{
    std::cout << "Bureaucrat parametrize constructor" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
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

const std::string   &Bureaucrat::getName() const
{
    return name;
}

int                 Bureaucrat::getGrade() const
{
    return grade;
}

std::ostream    &operator<<(std::ostream &os, const Bureaucrat &bc)
{
    os << bc.getName() << ", bureaucrat grade " << bc.getGrade();
    return os;
}


void    Bureaucrat::incrementGrade()
{
    if (grade == 1)
        throw GradeTooHighException();
    grade--;
}

void    Bureaucrat::decrementGrade()
{
    if (grade == 150)
        throw GradeTooLowException();
    grade++;
}




const char* Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
    return "grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
    return "grade is too low!";
}