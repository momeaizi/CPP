/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:10:18 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/03 15:39:06 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what() const _NOEXCEPT
{
    return "grade is too high!";
}

const char* Form::GradeTooLowException::what() const _NOEXCEPT
{
    return "grade is too low!";
}

void    Form::throwIfGradeIsOutOfBounds(int grade) const
{
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
}

Form::Form() : name ("----"), isSigned (false), gradeRequiredToSignIt (1), gradeRequiredToExecuteIt (1)
{
    // std::cout << "Form default constructor" << std::endl;
}

Form::Form(const std::string &name, int gradeRequiredToSignIt, int gradeRequiredToExecuteIt) : name (name), isSigned (false), gradeRequiredToSignIt (gradeRequiredToSignIt), gradeRequiredToExecuteIt (gradeRequiredToExecuteIt)
{
    // std::cout << "Form parametrize constructor" << std::endl;
    throwIfGradeIsOutOfBounds(gradeRequiredToSignIt);
    throwIfGradeIsOutOfBounds(gradeRequiredToExecuteIt);
}

Form::Form(const Form &form) :  name (form.getName()), isSigned (form.getIsSigned()), 
                                gradeRequiredToSignIt (form.getGradeRequiredToSignIt()),
                                gradeRequiredToExecuteIt (form.getGradeRequiredToExecuteIt())
{
    // std::cout << "Form copy constructor" << std::endl;
}

Form    &Form::operator=(const Form &form)
{
    // std::cout << "Form copy assignemet operator" << std::endl;
    (void) form;
    return *this;
}

Form::~Form()
{
    // std::cout << "Form destructor" << std::endl;
}

const std::string   &Form::getName() const
{
    return name;    
}

bool    Form::getIsSigned() const
{
    return isSigned;    
}

int Form::getGradeRequiredToSignIt() const
{
    return gradeRequiredToSignIt;    
}

int Form::getGradeRequiredToExecuteIt() const
{
    return gradeRequiredToExecuteIt;    
}

void    Form::beSigned(const Bureaucrat &bc)
{
    if (bc.getGrade() > gradeRequiredToSignIt)
        throw Form::GradeTooLowException();
    isSigned = true;
}

std::ostream    &operator<<(std::ostream &os, const Form &form)
{
    os << form.getName() << " is " ;
    if (!form.getIsSigned())
        os << "not " ;
    os << "signed, grade required to sign it is " << form.getGradeRequiredToSignIt() \
    << " and grade required to execute it is " << form.getGradeRequiredToExecuteIt();
    return os;
}