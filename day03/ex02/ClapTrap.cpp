/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:34:55 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/15 21:39:06 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


void	ClapTrap::attack(const std::string& target)
{

    if (this->Energy > 0)
    {
        std::cout  << "ClapTrap: " << this->Name << " attack " << target << ", causing " << Attack << " points of damage!" << std::endl;
        this->Energy--;
    }
    else
        std::cout << this->Name << " : la la ma bghiiiitch !! 3it !!!!!!" <<  std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
    if (this->HitPoints > 0)
    {
        std::cout << this->Name << " |" << this->HitPoints << "| : X_X OUCH!! (-" << amount << ") X_X" << std::endl;
        this->HitPoints -= amount;
    }
    else
        std::cout << this->Name << ": safi zga .. rani met" <<  std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
    if (this->Energy > 0)
    {
        std::cout << this->Name << " : ++ REAPAIRED ++ " << "(+" << amount << ") Healt" << std::endl;
        this->HitPoints += amount;
        this->Energy--;
    }
    else
        std::cout << this->Name << " : la la ma bghiiiitch !! 3it !!!!!!" << std::endl;
}

ClapTrap::ClapTrap(std::string N)
{
    std::cout << "ZzZzZz ClapNAME zZzZzZ" <<  std::endl;
    if (!N.size())
        N = "No Name";
    Name  = N;
    HitPoints = 10;
    Energy = 10;
    Attack = 0;
}

ClapTrap::ClapTrap()
{
    std::cout <<"ZzZzZz ClapTrap zZzZzZ" << std::endl;
    Name  = "No Name";
    HitPoints = 10;
    Energy = 10;
    Attack = 0;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ZzZzZz ClapDestroyed zZzZzZ " << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
    std::cout << "ZzZzZz ClapCC zZzZzZ" <<  std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator= (ClapTrap const &other)
{
    std::cout << "ZzZzZz ClapCAO zZzZzZ" << std::endl;
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->Energy = other.Energy;
    this->Attack = other.Attack;
    return *this;
}

/* void ClapTrap::printStatus(void)
{
    std::cout << Name << ": Hitpoints|" << this->HitPoints << "| " << " EnergyPoints|" << Energy << "|" << std::endl;
} */