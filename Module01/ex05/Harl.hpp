/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:41:48 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/22 18:03:56 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
class Harl
{
    private:
        void    debug( void );
        void    info( void );
        void    warning( void );
        void    error( void );
    public:
        void    complain( std::string level );
};


#endif