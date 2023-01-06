/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:08:11 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/10 22:05:42 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Weapon.hpp"

void    Weapon::setType(std::string str)
{
    type = str;
}

std::string const Weapon::getType(void)
{
    return  type;
}

Weapon::Weapon(std::string N)
{
    std::cout << "Weapon constructor called" << std::endl;
    type = N;
}

Weapon::Weapon()
{
}

Weapon::~Weapon()
{
	std::cout << "Weapon destructor called" << std::endl;
}