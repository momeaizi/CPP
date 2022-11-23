/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 13:15:14 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/19 19:29:18 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        Zombie();
        ~Zombie();
        void    announce( void );
        void    setName( std::string name );
};

Zombie* zombieHorde( int N, std::string name );

#endif