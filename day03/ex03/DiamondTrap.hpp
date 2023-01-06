/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:31:39 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/16 22:40:27 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap , public FragTrap
{ 
    public:
        void whoAmI()const;
        DiamondTrap();
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap(std::string N);
        DiamondTrap &operator =(const DiamondTrap &other);
        ~DiamondTrap();
        void    attack(const std::string& target);
        
    private:
        std::string	Name;
};

#endif