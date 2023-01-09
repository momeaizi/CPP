/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 18:57:12 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/09 12:39:05 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP


#include <algorithm>
#include <exception>
#include <vector>
#include <iostream>

class Span
{
    private:
        std::vector<int>    __nums;
        unsigned int        __short;

    public:
        ~Span();
        Span();
        Span(unsigned int N);
        Span(const Span &span);
        Span    &operator=(const Span &span);

        unsigned int            shortestSpan();
        unsigned int            longestSpan();
        void                    addNumber(int nbr);
        void                    addNumbers(int *range, size_t n);
        void                    insert(int nbr);
        const std::vector<int>  &getVec() const;


        class SpanIsFull : public std::exception
        {
            public:
                const char* what() const throw();
        };
        
        class SpanAlmostEmpty : public std::exception
        {
            public:
                const char* what() const throw();
        };
        
};

std::ostream    &operator<<(std::ostream &os, const Span &span);

#endif