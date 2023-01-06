/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 18:02:50 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/13 01:18:00 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    std::vector<int> ss;
    
    ss.push_back(1);
    ss.push_back(3);
    ss.push_back(3);
    ss.push_back(7);
    easyfind(ss, 3);
}