/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 23:17:23 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/13 22:28:30 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream &operator << (std::ostream &output, const Fixed &fx)
{
    output << fx.toFloat();
    return output;
}

Fixed &Fixed::operator = (const Fixed &other)
{
    this->fix = other.fix;
    std::cout << "Copy assignment operator called" << std::endl;
    return *this;
}

Fixed::Fixed(const int x)
{
    std::cout << "Int constructor called" << std::endl;
    fix = x << j;
}

Fixed::Fixed(const float x)
{
    std::cout << "Float constructor called" << std::endl;
    fix = roundf(x * (1 << j));
}


float   Fixed::toFloat( void ) const
{
    return ((float)fix / (1 << j));
}

int     Fixed::toInt( void ) const
{
    return (fix >> j);
}

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" <<std::endl;
}
