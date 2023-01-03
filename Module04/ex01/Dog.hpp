/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 10:58:23 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/02 11:08:40 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP


#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain   *brain;
    public:
        Dog();
        Dog(const Dog &dog);
        Dog  &operator=(const Dog &dog);
        ~Dog();

        Brain   *getBrain();
        void    makeSound() const;
};



#endif