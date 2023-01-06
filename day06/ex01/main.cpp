/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 18:51:27 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/06 00:12:57 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main()
{
    Data data;
    uintptr_t ptr;

    data.i = 9;
    data.str = "zack";
    
    ptr = serialize(&data);
    Data *data2 = deserialize(ptr);
    std::cout << data2->i << std::endl;
    std::cout << data2->str << std::endl;
}