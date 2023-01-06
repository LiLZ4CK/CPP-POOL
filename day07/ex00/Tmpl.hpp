/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Tmpl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 01:41:37 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/08 00:34:01 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TMPL_HPP
# define TMPL_HPP

#include <iostream>
template <class Tswp>
    void swap(Tswp &a, Tswp &b)
{
    Tswp x;

    x = a;
    a = b;
    b = x;
}
template <class Tmin>
    Tmin & max(Tmin& a, Tmin& b)
    {
        return (a > b) ? a:b;
    }
template <class Tmax>
    Tmax & min(Tmax &a, Tmax &b)
    {
        return (a < b) ? a:b;
    }
#endif