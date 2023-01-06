/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:07:37 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/15 19:56:09 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string	Name;
		int			HitPoints;
		int			Energy;
		int			Attack;
		
	public:
		void	attack(const std::string& Name);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		ClapTrap();
		ClapTrap(std::string N);
		ClapTrap(ClapTrap const &other);/* 
		void printStatus(void); */
		ClapTrap &operator = (ClapTrap const &other);
		~ClapTrap();
};

#endif
