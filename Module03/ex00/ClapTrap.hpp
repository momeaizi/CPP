/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 15:51:27 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/20 18:05:41 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    private:
        std::string     name;
        unsigned int    Hit;
        unsigned int    Energy;
        unsigned int    Attack;

    public:
        ClapTrap();
        ClapTrap(ClapTrap const &claptrap);
        ClapTrap(const std::string name, int Hit, int Energy, int Attack);
        ClapTrap(const std::string name);
        ClapTrap &operator=(ClapTrap const &claptrap);
        ~ClapTrap();

        void                attack(const std::string& target);
        void                takeDamage(unsigned int amount);
        void                beRepaired(unsigned int amount);
};


#endif