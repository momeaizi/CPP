/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:28:35 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/03 10:45:28 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

const char* Bureaucrat::GradeTooHighException::what() const _NOEXCEPT
{
    return "grade is too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const _NOEXCEPT
{
    return "grade is too low!";
}





Bureaucrat::Bureaucrat() : name ("----"), grade (150)
{
    // std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade) : name (name)
{
    // std::cout << "Bureaucrat parametrize constructor" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &bc) : name (bc.name), grade (bc.grade)
{
    // std::cout << "Bureaucrat copy constructor" << std::endl;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &bc)
{
    // std::cout << "Bureaucrat copy assignement operator" << std::endl;
    this->grade = bc.grade;
    return *this;
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "Bureaucrat destructor" << std::endl;
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

void    Bureaucrat::signForm(Form &form) const
{
    try
    {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << name << "  couldn\'t sign " << form.getName() << " because " << e.what() << std::endl;
        throw ;
    }
}

void    Bureaucrat::executeForm(Form const & form)
{
    try
    {
        form.execute(*this);
        std::cout << name << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << name << "  couldn\'t execute " << form.getName() << " because " << e.what() << std::endl;
        throw ;
    }
}

std::ostream    &operator<<(std::ostream &os, const Bureaucrat &bc)
{
    os << "Form of " << form.getName() << " is " ;
    if (!form.getIsSigned())
        os << "not " ;
    os << "signed, grade required to sign it is " << form.getGradeRequiredToSignIt() \
    << " and grade required to execute it is " << form.getGradeRequiredToExecuteIt();
    return os;
}