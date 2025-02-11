/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:21:28 by csouita           #+#    #+#             */
/*   Updated: 2025/02/09 01:08:40 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>
#include <string>

class Fixed{
    private : 
        int Value;
        static const int Bits = 8;
    public :
        Fixed();
        Fixed(const Fixed &copy);
        Fixed& operator=(const Fixed &fixed);
        ~Fixed();
        void setRawBits(int const raw);
        int getRawBits(void) const;
};


#endif