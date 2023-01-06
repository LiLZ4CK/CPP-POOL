/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:07:47 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/09 19:09:11 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::SetName(std::string nn)
{
    name = nn;
}

std::string Zombie::GetName(void)
{
    return name;
}

void    Zombie::announce(void)
{
	std::cout << GetName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{ 
}

Zombie::~Zombie()
{
    std::cout << GetName() << " is destroyed"  << std::endl;
}