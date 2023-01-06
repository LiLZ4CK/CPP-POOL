/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:07:24 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/09 22:37:48 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include    <iostream>

class Zombie
{
	private:
		std::string	Name;
	public:
		std::string	GetName(void) const;
		void	annonce(void) const;
		void	SetName(std::string nn);
		Zombie();
		~Zombie();
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif