/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 19:46:15 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/09 13:37:32 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

const char* Span::SpanIsFull::what() const throw()
{
    return "Span is full!";
}

const char* Span::SpanAlmostEmpty::what() const throw()
{
    return "Span is almost empty!";
}

Span::Span() : __short (UINT_MAX) {}

Span::~Span() {}

Span::Span(unsigned int N) : __short (UINT_MAX)
{
    __nums.reserve(N);
}

Span::Span(const Span &span) : __nums (span.__nums), __short (span.__short) {}

Span    &Span::operator=(const Span &span)
{
    if (this != &span)
        __nums = span.__nums;
    return *this;
}

void    Span::addNumber(int nbr)
{
    if (__nums.size() == __nums.capacity())
        throw SpanIsFull();
    
    insert(nbr);
}

void    Span::addNumbers(int *range, size_t n)
{
    if (__nums.capacity() - __nums.size() < n)
        throw SpanIsFull();

    __nums.insert(__nums.end(), range, range + n);
    for (size_t i = 0; i < n; i++)
        insert(range[i]);
}

void    Span::insert(int nbr)
{
    std::vector<int>::iterator   lower = __nums.begin();

    lower = std::upper_bound(__nums.begin(), __nums.end(), 6);
    
    __nums.insert(lower, nbr);

    if (__nums.size() < 2)
        return ;

    if (lower > __nums.begin())
        if (static_cast<unsigned int>(abs(*__nums.begin() - *lower)) < __short)
            __short = static_cast<unsigned int>(abs(*__nums.begin() - *lower));

    if (lower < __nums.end())
        if (static_cast<unsigned int>(abs(*lower - *(__nums.end() - 1))) < __short)
            __short = static_cast<unsigned int>(abs(*__nums.begin() - *lower));

        
}

unsigned int    Span::shortestSpan()
{
    if (__nums.size() < 2)
        throw SpanAlmostEmpty();
    return __short;
}

unsigned int    Span::longestSpan()
{
    if (__nums.size() < 2)
        throw SpanAlmostEmpty();
    return *(__nums.end() - 1) - *__nums.begin();
}
const std::vector<int>  &Span::getVec() const
{
    return __nums;
}
std::ostream    &operator<<(std::ostream &os, const Span &span)
{
    const std::vector<int>    &vec = span.getVec();

    for (size_t i = 0; i < vec.size(); i++)
        os << vec[i] << " ";
    return os;
}
