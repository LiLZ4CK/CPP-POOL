/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:07:21 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/09 22:38:02 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Zombie.hpp"

void    Zombie::annonce(void) const
{
	std::cout << GetName() << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << GetName() << " is destroyed" << std::endl;
}


Zombie::Zombie()
{
}

void	Zombie::SetName(std::string nn)
{
	Name = nn;
}

std::string	Zombie::GetName(void) const
{
	return (Name);
}
	