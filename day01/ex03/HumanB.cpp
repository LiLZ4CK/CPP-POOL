/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:08:03 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/10 14:34:59 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::attack()
{
	if (WeaponB)
		std::cout << getName() << " attacks with their " << WeaponB->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &WB)
{
	HumanB::WeaponB = &WB;
}

HumanB::HumanB(std::string N)
{
	std::cout << "HumanB constructor called" << std::endl;
	if(N.size() == 0)
		N = "No Name";
	HumanB::name = N;
}

std::string HumanB::getName(void)
{
	return HumanB::name;
}

void	HumanB::setName(std::string n)
{
	if(n.size() == 0)
		n = "No Name";
	HumanB::name = n;
}

HumanB::~HumanB()
{
	std::cout << "HumanB destructor called" << std::endl;
}