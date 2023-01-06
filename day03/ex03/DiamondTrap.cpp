/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:31:37 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/16 22:41:10 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
    std::cout << "ZzZzZz DiamondTrap zZzZzZ" << std::endl;
    this->Name = "no name";
    this->HitPoints = 100;
    this->Energy = 50;
    this->Attack = 30;
    
}

DiamondTrap::DiamondTrap(std::string N) : FragTrap(N + "_clap_name")
{
    std::cout << "ZzZzZz DiamondName zZzZzZ" << std::endl;
    this->Name = N;
    this->HitPoints = 100;
    this->Energy = 50;
    this->Attack = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    *this = other;
}

DiamondTrap::~DiamondTrap()
{
        std::cout << "ZzZzZz DiamondDestroyed zZzZzZ" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    std::cout << "ZzZzZz DiamondCAO zZzZzZ" << std::endl;
    this->Attack = other.Attack;
    this->Energy = other.Energy;
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    return *this;
}


void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}