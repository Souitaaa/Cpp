/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 00:25:52 by csouita           #+#    #+#             */
/*   Updated: 2025/02/11 05:09:53 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
    Value = 0;
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

void Fixed::setRawBits(int const raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    this->Value = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->Value;
}

Fixed& Fixed::operator=(const Fixed &fixed)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &fixed)
        this->Value = fixed.getRawBits();
    return *this;
}

Fixed::Fixed(const int value)
{
    std::cout << "Int constructor called" << std::endl;
    this->Value = value << Bits; 
}

int Fixed::toInt(void) const
{
    return this->Value >> Bits; 
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->Value = roundf(value * (1 << Bits));
}

float Fixed::toFloat(void) const
{
    return (float)this->Value / (1 << Bits);
}

std::ostream &operator<<(std::ostream &o, Fixed const &i)
{
    o << i.toFloat();
    return o;
}

bool Fixed::operator>(const Fixed& copy) const
{
    if(Value > copy.Value)
        return true;
    return false;
}

bool Fixed::operator<(const Fixed& copy) const
{
    if(Value <= copy.Value)
        return true;
    return false;
}

bool Fixed::operator>=(const Fixed& copy) const
{
    if(Value >= copy.Value)
        return true;
    return false;
}

bool Fixed::operator<=(const Fixed& copy) const
{
    if(Value == copy.Value)
        return true;
    return false;
}

bool Fixed::operator==(const Fixed& copy) const
{
    if(Value >= copy.Value)
        return true;
    return false;
}

bool Fixed::operator!=(const Fixed& copy) const
{
    if(Value != copy.Value)
        return true;
    return false;
}


Fixed Fixed::operator+(const Fixed& copy) const
{
    Fixed result;
    result.Value = Value + copy.Value;
    return result;
}

Fixed Fixed::operator-(const Fixed& copy) const
{
    Fixed result;
    result.Value = Value - copy.Value ;
    return result;
}

Fixed Fixed::operator*(const Fixed& copy) const
{
    Fixed result;
    result.Value =( Value * copy.Value  )/ 256;
    return result;
}

Fixed Fixed::operator/(const Fixed& copy) const
{
    Fixed result;
    result.Value = Value / copy.Value * 256 ;
    return result;
}

Fixed Fixed::operator++(int)
{
    Fixed result;
    result.Value = Value + 1;
    return result;
}

Fixed Fixed::operator--(int)
{
    Fixed result;
    result.Value = Value - 1 ;
    return result;
}

Fixed& Fixed::operator++()
{
    Value = Value + 1;
    return *this;
}

Fixed& Fixed::operator--()
{
    Value = Value - 1;
    return *this;
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    if(a.Value < b.Value)
        return a;
    return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    if(a.Value > b.Value)
        return a;
    return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    if(a.Value < b.Value)
        return a;
    return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    if(a.Value > b.Value)
        return a;
    return b;
}