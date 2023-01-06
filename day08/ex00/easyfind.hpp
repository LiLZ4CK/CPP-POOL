/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 12:59:32 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/13 01:17:22 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <vector>
#include <stack>
#include <list>
#include <exception>
#include <iostream>

template <typename T>
	void easyfind(T type, int i)
	{
		typename T::iterator p;
		p = find(type.begin(), type.end(), i);
		try
		{
			if(p == type.end())
				throw std::exception();
			else
				std::cout << "i found it : " << *p << std::endl;
		}
		catch(std::exception &e)
		{
			std::cout << e.what() <<": element not found !!" << std::endl;
		}
	};
#endif