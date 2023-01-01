/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 13:30:31 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/01 17:27:54 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>


class ShrubberyCreationForm : public Form
{
    private:
        std::string target;

    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(const std::string &target);
        ShrubberyCreationForm(const ShrubberyCreationForm &shcf);
        ShrubberyCreationForm   &operator=(const ShrubberyCreationForm &shcf);
        ~ShrubberyCreationForm();


        void    execute(Bureaucrat const & executor) const;
};


#define TREE "                  oxoxoo    ooxoo\n\
                 ooxoxo oo  oxoxooo\n\
                oooo xxoxoo ooo ooox\n\
                oxo o oxoxo  xoxxoxo\n\
                 oxo xooxoooo o ooo\n\
                   ooo\\oo\\  /o/o\n\
                       \\  \\/ /\n\
                        |   /\n\
                        |  |\n\
                        | D|\n\
                        |  |\n\
                        |  |\n\
                 ______/____\\____"

#endif