/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 22:55:35 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/07 23:45:04 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <iomanip>
#include <exception>
#include "Array.tpp"
template<typename Array>
	void prnt(const Array &a){
		for(int i = 0; i < a.size(); i++)
		{
			std::cout << a[i] << " - ";
		}
		std::cout << std::endl;
	};
#endif