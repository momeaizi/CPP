/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 13:30:32 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/04 09:56:07 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form ("ShrubberyCreationForm", 145, 137), target ("----")
{
    // std::cout << "ShrubberyCreationForm default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form ("ShrubberyCreationForm", 145, 137), target (target)
{
    // std::cout << "ShrubberyCreationForm parametrize constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &shcf) : Form ("ShrubberyCreationForm", 145, 137), target (shcf.target)
{
    // std::cout << "ShrubberyCreationForm copy constructor" << std::endl;
}

ShrubberyCreationForm   &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &shcf)
{
    // std::cout << "ShrubberyCreationForm copy assignement operator" << std::endl;
    this->target = shcf.target;
    return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    // std::cout << "ShrubberyCreationForm destructor" << std::endl;
}

void    ShrubberyCreationForm::executeForm() const
{
    std::ofstream   file;

    file.open(this->target + "_shrubbery");
    if (file.fail())
    {
        std::cerr << "Cannot open " << this->target + "_shrubbery" << "!\n";
        exit(1);
    }
    file << TREE << std::endl;
    file.close();
}
