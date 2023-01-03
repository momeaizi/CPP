/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 11:39:27 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/02 11:51:33 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : type ("None")
{
    // std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(const AMateria &materia) : type (materia.getType())
{
    // std::cout << "AMateria copy constructor" << std::endl;
}

AMateria::AMateria(std::string const & type) : type (type)
{
    // std::cout << "AMateria parametrize constructor" << std::endl;
}


AMateria::~AMateria()
{
    // std::cout << "AMateria destructor" << std::endl;
}

std::string const & AMateria::getType() const
{
    return type;
}

void AMateria::use(ICharacter& target)
{
    (void) target;
}
