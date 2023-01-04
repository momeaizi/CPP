/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:03:32 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/04 11:06:05 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef INTERN_HPP
#define INTERN_HPP


#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


class Intern
{       
    public:
        Intern();
        Intern(const Intern &inter);
        Intern  &operator=(const Intern &inter);
        ~Intern();

        Form    *makeForm(const std::string &formName, const std::string &target);

        class FormDoesNotExist : public std::exception
        {
            public:
                const char* what() const _NOEXCEPT;
        };

        
};



#endif