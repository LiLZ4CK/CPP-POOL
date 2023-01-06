/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:07:13 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/09 22:46:05 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie const *zombie1;

	zombie1 = newZombie("alpha");
	zombie1->annonce();
	randomChump("beta");
	delete zombie1;
}
