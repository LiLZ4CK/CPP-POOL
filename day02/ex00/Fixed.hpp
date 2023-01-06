/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:03:02 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/13 21:07:02 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include    <iostream>

class Fixed
{
	private:
		int fix;
		static const int  j = 8;
	public:
		int getRawBits(void) const;
		void    setRawBits(int const raw);
		Fixed(const Fixed &other); //copy constuctor
		Fixed &operator = (const Fixed &other); //copy assinment operator everload
		Fixed(); // default constructor
		~Fixed(); // destructor
};

#endif 