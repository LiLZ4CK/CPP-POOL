/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:05:39 by zwalad            #+#    #+#             */
/*   Updated: 2022/10/25 12:14:36 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie  *alpha;
    int     i;

    i = 0;
    if(name.size() == 0)
		name = "No Name";
    if (N <= 0)
        return 0;
    alpha = new Zombie[N];
    while(i < N)
    {
        alpha[i++].SetName(name);
    }
    return alpha;
}