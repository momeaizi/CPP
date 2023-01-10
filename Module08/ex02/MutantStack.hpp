/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/09 15:08:20 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/10 16:27:06 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP


#include <iterator>
#include <iostream>
#include <stack>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
    public:
        typedef typename Container::iterator iterator;
        MutantStack();
        MutantStack(const MutantStack &ms);
        MutantStack &operator=(const MutantStack &ms);
        ~MutantStack() {};

        iterator    begin();
        iterator    end();
};


template <typename T, typename Container>
MutantStack<T, Container>::MutantStack() {}


template <typename T, typename Container>
MutantStack<T, Container>::MutantStack(const MutantStack &ms) : std::stack<T, Container>(ms) {}


template <typename T, typename Container>
MutantStack<T, Container> &MutantStack<T, Container>::operator=(const MutantStack<T, Container> &ms)
{
    std::stack<T, Container>    &st = ms;
    *this = st;
    return *this;
}



template <typename T, typename Container>
typename MutantStack<T, Container>::iterator   MutantStack<T, Container>::begin()
{
    return this->c.begin();
}

template <typename T, typename Container>
typename MutantStack<T, Container>::iterator   MutantStack<T, Container>::end()
{
    return this->c.end();
}

#endif
