/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:08:02 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/09 23:00:45 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon	&WeaponA;
	public:
		std::string	name;
		void	attack(void);
		void	setName(std::string N);
		std::string	getName(void);
		HumanA(std::string str, Weapon &WA);
		~HumanA();
};

#endif