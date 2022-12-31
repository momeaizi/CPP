/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/31 13:27:51 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/31 17:04:48 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

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

        void                increment();
        void                decrement();

        const std::string   &getName();
        int                 getGrade();

        static GradeTooHighException    gradeTooHighException;
        static GradeTooLowException     gradeTooLowException;
};

std::ostream    &operator<<(std::ostream &os, Bureaucrat &bc);



#endif