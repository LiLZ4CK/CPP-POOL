/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 01:31:36 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/16 01:32:30 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	protected:
		std::string	Name;
		int			HitPoints;
		int			Energy;
		int			Attack;
		
	public:
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
/* 		void 	printStatus(void);
 */		ClapTrap();
		ClapTrap(std::string N);
		ClapTrap(ClapTrap const &other);
		ClapTrap &operator = (ClapTrap const &other);
		~ClapTrap();
};

#endif