/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:41:48 by momeaizi          #+#    #+#             */
/*   Updated: 2022/11/21 13:22:30 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>
class Harl
{
    private:
        void    info( void );
        void    warning( void );
        void    error( void );
    public:
        void    debug( void );
        void    complain( std::string level );
};


#endif