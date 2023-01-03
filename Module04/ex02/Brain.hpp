/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 10:57:34 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/02 11:02:18 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string ideas[100];
        int         i;
    public:
        Brain();
        Brain(const Brain &brain);
        Brain   &operator=(const Brain &brain);
        virtual ~Brain();

        void                addIdea(const std::string &idea);
        const std::string   *getIdea();
};


#endif