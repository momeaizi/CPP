/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: momeaizi <momeaizi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/08 13:06:04 by momeaizi          #+#    #+#             */
/*   Updated: 2023/01/08 14:47:07 by momeaizi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <exception>

template <typename T>
class Array
{
    private:
        T               *__array;
        unsigned int    __size;

    public:
        ~Array();
        Array();
        Array(unsigned int n);
        Array(const Array<T> &array);
        Array<T>    &operator=(const Array<T> &array);
        T           &operator[](unsigned int i);
        unsigned int    size() const;

        class OutOfRange : public std::exception
        {
            public:
                const char* what() const throw();
        };
};

/* *************************************************************************** */
/*                           default constructor                               */
/* *************************************************************************** */
template <typename T>
Array<T>::Array() : __array (NULL), __size (0) {}

/* *************************************************************************** */
/*                           parametrize constructor                           */
/* *************************************************************************** */
template <typename T>
Array<T>::Array(unsigned int n) : __size (n)
{
    __array = new T[n];
}


/* *************************************************************************** */
/*                           copy constructor                                  */
/* *************************************************************************** */
template <typename T>
Array<T>::Array(const Array<T> &array) : __size (array.__size)
{
    __array = new T[__size];

    for (unsigned int i = 0; i < __size; i++)
        this->__array[i] = array.__array[i];
}


/* *************************************************************************** */
/*                           copy assignement operator                         */
/* *************************************************************************** */
template <typename T>
Array<T>   &Array<T>::operator=(const Array<T> &array)
{
    __size = array.__size;
    delete [] __array;
    __array = new T[__size];

    for (unsigned int i = 0; i < __size; i++)
        this->__array[i] = array.__array[i];
    return *this;
}

/* *************************************************************************** */
/*                           subscript operator                                */
/* *************************************************************************** */
template <typename T>
T   &Array<T>::operator[](unsigned int i)
{
    if (i >= __size)
        throw OutOfRange();
    return __array[i];
}

/* *************************************************************************** */
/*                           destructor                                        */
/* *************************************************************************** */
template <typename T>
Array<T>::~Array()
{
    delete [] __array;
}

/* *************************************************************************** */
/*                           size                                              */
/* *************************************************************************** */
template <typename T>
unsigned int    Array<T>::size() const
{
    return __size;
}



template <typename T>
const char* Array<T>::OutOfRange::what() const throw()
{
    return "index is out of range";
}


#endif