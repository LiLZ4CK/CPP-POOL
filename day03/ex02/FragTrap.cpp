/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:34:57 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/15 21:39:23 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout <<"ZzZzZz FragTrap zZzZzZ" << std::endl;
    Name = "No Name";
    HitPoints = 100;
    Energy = 100;
    Attack = 30;
}

FragTrap::FragTrap(std::string N)
{
    std::cout << "ZzZzZz FragNAME zZzZzZ" << std::endl;
    if (!N.size())
        N = "No Name";
    Name = N;
    HitPoints = 100;
    Energy = 100;
    Attack = 30;
}

FragTrap::~FragTrap()
{
    std::cout << "ZzZzZz FragDestroyed zZzZzZ " << std::endl;
}

void FragTrap::attack(const std::string& target)
{

    if (this->Energy > 0)
    {
        std::cout << "FragTrap: " << this->Name << " attack " << target << ", causing " << Attack << " points of damage!" << std::endl;
        this->Energy--;
    }
    else
        std::cout << this->Name << " : -___- la la ma bghiiiitch !! 3it !!!!!!" << std::endl;
}

FragTrap &FragTrap::operator= (FragTrap const &other)
{
    std::cout << "ZzZzZz ClapCAO zZzZzZ" << std::endl;
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->Energy = other.Energy;
    this->Attack = other.Attack;
    return *this;
}

void FragTrap::highFivesGuys()
{
     std::cout << this->Name << ": High Fives ✋" << std::endl;
}
