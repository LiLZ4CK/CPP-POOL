/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:31:45 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/16 17:32:45 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "ZzZzZz ScavTrap zZzZzZ" << std::endl;
    Name = "No Name aa";
    HitPoints = 100;
    Energy = 50;
    Attack = 20;
}

ScavTrap::~ScavTrap()
{
     std::cout << "ZzZzZz ScavDestroyed zZzZzZ " << std::endl;
}

ScavTrap::ScavTrap(std::string N)
{
    std::cout << "ZzZzZz ScavTrap. zZzZzZ" << std::endl;
    if (!N.size())
        N = "No Name";
    Name = N;
    HitPoints = 100;
    Energy = 50;
    Attack = 20;
}

void ScavTrap::attack(const std::string& target)
{

    if (this->Energy > 0)
    {
        std::cout << "ScavTrap: " << this->Name << " attack " << target << ", causing " << Attack << " points of damage!" <<  std::endl;
        this->Energy--;
    }
    else
        std::cout <<  this->Name << " : -___- la la ma bghiiiitch !! 3it !!!!!!" <<  std::endl;
/*     printStatus();
 */}

ScavTrap &ScavTrap::operator= (ScavTrap const &other)
{
    std::cout << "ZzZzZz ClapCAO zZzZzZ" << std::endl;
    this->Name = other.Name;
    this->HitPoints = other.HitPoints;
    this->Energy = other.Energy;
    this->Attack = other.Attack;
    return *this;
}

ScavTrap::ScavTrap(ScavTrap const &other)
{
    *this = other;
}