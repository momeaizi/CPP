/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:10:32 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/04 10:25:28 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP


#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        const std::string   name;
        bool                isSigned;
        const int           gradeRequiredToSignIt;
        const int           gradeRequiredToExecuteIt;

    public:
        Form();
        Form(const Form &form);
        Form    &operator=(const Form &form);
        Form(const std::string &name, \
                    int gradeRequiredToSignIt, int gradeRequiredToExecuteIt);
        virtual ~Form();

        const std::string   &getName() const;
        bool                getIsSigned() const;
        int                 getGradeRequiredToSignIt() const;
        int                 getGradeRequiredToExecuteIt() const;

        void                throwIfGradeIsOutOfBounds(int grade) const;
        void                beSigned(const Bureaucrat &bc);
        void                execute(Bureaucrat const &executor) const;
        virtual void        executeForm() const = 0;

        
        class GradeTooHighException  : public std::exception
        {
            public:
                const char* what() const _NOEXCEPT;
        };

        class GradeTooLowException  : public std::exception
        {
            public:
                const char* what() const _NOEXCEPT;
        };

        class GradeTooLowToSignFormException  : public std::exception
        {
            public:
                const char* what() const _NOEXCEPT;
        };
};

std::ostream    &operator<<(std::ostream &os, const Form &form);


#endif