/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:21:28 by csouita           #+#    #+#             */
/*   Updated: 2025/02/11 04:47:54 by csouita          ###   ########.fr       */
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
        Fixed(const int value);
        Fixed(const float value);
        float toFloat( void ) const;
        int toInt( void ) const;
        bool operator>(const Fixed &copy) const;
        bool operator<(const Fixed &copy) const;
        bool operator>=(const Fixed &copy) const;
        bool operator<=(const Fixed &copy) const;
        bool operator==(const Fixed &copy) const;
        bool operator!=(const Fixed &copy) const;
        Fixed operator+(const Fixed &copy) const;
        Fixed operator/(const Fixed &copy) const;
        Fixed operator*(const Fixed &copy) const;
        Fixed operator-(const Fixed &copy) const;
        Fixed operator++(int);
        Fixed operator--(int);
        Fixed& operator--();
        Fixed& operator++();
        static Fixed& min(Fixed &a, Fixed &b);
        static const Fixed& min(const Fixed &a, const Fixed &b);
        static Fixed& max(Fixed &a, Fixed &b);
        static const Fixed& max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &o, Fixed const &i); 

#endif