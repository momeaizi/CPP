/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 14:46:10 by momeaizi          #+#    #+#             */
/*   Updated: 2022/12/22 11:27:59 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONTRAP_HPP
#define DIAMONTRAP_HPP

#include <string>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
    std::string name;
public:
    DiamondTrap();
    DiamondTrap(DiamondTrap const &diamondTrap);
    DiamondTrap(const std::string name);
    DiamondTrap &operator=(DiamondTrap const &diamondTrap);
    ~DiamondTrap();

    void    attack(const std::string& target);
    void    whoAmI();
};



#endif