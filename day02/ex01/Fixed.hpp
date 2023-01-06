/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 18:01:07 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/13 22:28:09 by zwalad           ###   ########.fr       */
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
        int   fix;
        static const int  j = 8;
    public:
        float toFloat( void ) const;
        int toInt( void ) const;
        Fixed &operator = (const Fixed &other);
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int x);
        Fixed(const float x);
        ~Fixed();
    
};
    std::ostream &operator << (std::ostream &output, const Fixed &other);
#endif