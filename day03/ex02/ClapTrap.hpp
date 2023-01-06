/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:34:52 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/15 19:57:48 by zwalad           ###   ########.fr       */
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
