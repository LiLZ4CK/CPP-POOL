/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 01:31:06 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/03 22:00:17 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>
template <typename T>
    void print(T t)
    {
        std::cout << t << std::endl;
    }
template <typename Iterr>
    void iter(Iterr *array,int len, void(f)(Iterr) )
    {
        int i = 0;
        while(i < len)
        {
            f(array[i]);
            i++;
        }
    }
#endif