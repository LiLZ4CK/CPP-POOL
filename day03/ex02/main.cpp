/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 22:35:01 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/15 19:17:51 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap a("aa");
    FragTrap b("oo");


    a.attack("oo");
    b.takeDamage(30);
    a.attack("oo");
    b.takeDamage(30);
    a.highFivesGuys();
    b.highFivesGuys();
}