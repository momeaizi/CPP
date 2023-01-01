/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:27:51 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/01 17:13:56 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"


class Form;

class Bureaucrat
{
    private:
        const std::string   name;
        int                 grade;


    public:
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &bc);
        Bureaucrat  &operator=(const Bureaucrat &bc);
        ~Bureaucrat();

        void                incrementGrade();
        void                decrementGrade();
        void                signForm(Form &form) const;
        void                executeForm(Form const & form);

        const std::string   &getName() const;
        int                 getGrade() const;

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

std::ostream    &operator<<(std::ostream &os, const Bureaucrat &bc);



#endif