/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:32:43 by csouita           #+#    #+#             */
/*   Updated: 2025/07/16 21:29:13 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>
#include <math.h>
#include <string.h>

template <typename T>

void swap(T &a , T &b)
{
    T temp = a ;
    a = b ;
    b = temp;
}
template <typename T>
T min(T a , T b)
{
    return ((a < b )?  a : b);   
}
template <typename T>
T max(T a , T b)
{
    return ((a > b )?  a : b);   
}
#endif