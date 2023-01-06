/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Datta.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:51:25 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/29 19:11:27 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

struct Data
{
    int i;
    std::string str;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);
#endif