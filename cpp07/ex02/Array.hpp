/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:32:43 by csouita           #+#    #+#             */
/*   Updated: 2025/07/18 19:26:46 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array {
    private :
        T *array ;
        unsigned int N ;
    public :
        Array();
        Array(unsigned int n);
        Array(const Array &copy);
        Array &operator=(const Array &array);
        T &operator[](unsigned int index);
        T size();
        ~Array();
};

#include "Array.tpp"
#endif 
        