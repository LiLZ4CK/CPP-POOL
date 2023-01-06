/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:07:16 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/09 22:37:55 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *alpha;
	
	if(name.size() == 0)
		name = "No Name";
	alpha = new Zombie();
	alpha->SetName(name);
	return alpha;
}