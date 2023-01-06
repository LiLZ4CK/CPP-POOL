/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:08:00 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/09 23:15:32 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string str, Weapon &WA) : WeaponA(WA)
{
    std::cout << "HumanA constructor called" << std::endl;
    HumanA::name = str;
}

void    HumanA::attack()
{
    std::cout << getName() << " attacks with their " << WeaponA.getType() << std::endl;
}

void        HumanA::setName(std::string N)
{
    HumanA::name = N;
}

std::string  HumanA::getName(void)
{
    return  HumanA::name;
}
HumanA::~HumanA()
{
	std::cout << "HumanA destructor called" << std::endl;
}