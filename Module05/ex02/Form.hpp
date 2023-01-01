/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 10:10:32 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/01 18:01:41 by momeaizi         ###   ########.fr       */
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

        void                gradeRange(int grade) const;
        void                beSigned(const Bureaucrat &bc);
        void                beExecuted(const Bureaucrat &bc) const;
        
        virtual void        execute(Bureaucrat const & executor) const = 0;

        
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
};

std::ostream    &operator<<(std::ostream &os, const Form &form);


#endif