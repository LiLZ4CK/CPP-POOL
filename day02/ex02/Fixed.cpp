/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 01:51:46 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/22 19:14:08 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream &operator << (std::ostream &output,const Fixed &fx)
{
    output << fx.toFloat();
    return output;
}

Fixed &Fixed::operator = (const Fixed &other)
{
    this->fix = other.fix;
    return *this;
}

Fixed::Fixed( int x)
{
    fix = roundf(x * (1 << j));
}

Fixed::Fixed(const float x)
{
    fix = roundf(x * (1 << j));
}

float   Fixed::toFloat( void ) const
{
    return ((float)fix / (1 << j));
}

int     Fixed::toInt( void ) const
{
    return roundf((float)fix / (1 << j));
}

Fixed::Fixed()
{
    fix = 0;
}

Fixed::Fixed(const Fixed &other)
{
    *this = other;
}

Fixed::~Fixed()
{

}

bool Fixed::operator < (const Fixed &other)  const
{
    if (this->fix < other.fix)
        return true;
    return false;
}

bool Fixed::operator > (const Fixed &other) const
{
    if (this->fix > other.fix)
        return true;
    return false;
}

bool Fixed::operator <= (const Fixed &other) const
{
    if (this->fix <= other.fix)
        return true;
    return false;
}

bool Fixed::operator >= (const Fixed &other) const
{
    if (this->fix >= other.fix)
        return true;
    return false;
}

bool Fixed::operator == (const Fixed &other) const
{
    if (this->fix == other.fix)
        return true;
    return false;
}

bool Fixed::operator != (const Fixed &other) const
{
    if (this->fix != other.fix)
        return true;
    return false;
}

Fixed Fixed::operator + (const Fixed &other) const
{
    Fixed x((this->fix) + (other.fix));
    return (x);
}

Fixed Fixed::operator - (const Fixed &other) const
{
    Fixed x(this->fix - other.fix);
    return (x);
}

Fixed Fixed::operator * (const Fixed &other) const
{
    Fixed x (this->toFloat() * other.toFloat());
    return (x);
}

Fixed Fixed::operator / (const Fixed &other) const
{
    Fixed x((this->toFloat() / other.toFloat()));
    return (x);
}

Fixed Fixed::operator ++ (int)// post
{    Fixed tmp = *this;
    ++this->fix;
    return (tmp);
   
}

Fixed Fixed::operator -- (int) //post 
{
    Fixed tmp = *this;
    --this->fix;
    return (tmp);
}

Fixed &Fixed::operator ++ (void) //pre
{
    this->fix++;
    return (*this);
}

Fixed &Fixed::operator -- (void)//pre 
{
    this->fix--;
    return (*this);
    
}

Fixed  &Fixed::max(Fixed &a, Fixed &b)
{
    if (a.fix > b.fix)
        return a;
    return b;
}

Fixed  &Fixed::min(Fixed &a, Fixed &b)
{
    if (a.fix < b.fix)
        return a;
    return b;
}

Fixed const  &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a.fix > b.fix)
        return a;
    return b;
}

Fixed const &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a.fix < b.fix)
        return a;
    return b;
}