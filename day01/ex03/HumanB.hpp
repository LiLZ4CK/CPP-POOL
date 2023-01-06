/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:08:04 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/10 14:34:50 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
	private:
		Weapon	*WeaponB;
	public:
		std::string	name;
		void		setName(std::string str);
		std::string	getName(void);
		void		attack(void);
		void		setWeapon(Weapon &WB);
	HumanB(std::string N);
	~HumanB();
};

#endif