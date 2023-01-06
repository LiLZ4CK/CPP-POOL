/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 01:51:49 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/13 22:29:11 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include    <iostream>
#include	<fstream>
#include    <cmath>

class Fixed
{
    private:
        int  fix;
        static const int  j = 8;
    public:
        float toFloat( void ) const;
        int toInt( void ) const;
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &min(Fixed const &a, Fixed const &b);
        static const Fixed &max(Fixed const &a, Fixed const &b);
        Fixed &operator = (const Fixed &other);
        bool operator < (const Fixed &other) const;
        bool operator > (const Fixed &other) const;
        bool operator <= (const Fixed &other) const;
        bool operator >= (const Fixed &other) const;
        bool operator == (const Fixed &other) const;
        bool operator != (const Fixed &other) const;
        Fixed operator + (const Fixed &other) const;
        Fixed operator - (const Fixed &other) const;
        Fixed operator * (const Fixed &other) const;
        Fixed operator / (const Fixed &other) const;
        Fixed operator -- (int);
        Fixed operator ++ (int);
        Fixed &operator -- (void);
        Fixed &operator ++ (void);
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int x);
        Fixed(const float x);
        ~Fixed();
};



    std::ostream &operator << (std::ostream &output, const Fixed &other);
#endif