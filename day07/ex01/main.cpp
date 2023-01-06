/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 01:31:28 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/05 22:09:38 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main()
{
    std::string a = "holaaaa";
    int len = strlen(a.c_str());
    int i[5] = {12,13,144,156,64};
    
    std::cout << len << std::endl;
    iter(a.c_str(), len, print);
    iter(i, 5, print);
}