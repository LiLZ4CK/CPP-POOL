/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 02:00:25 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/01 12:43:42 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap a("aa");
    ScavTrap b("bb");
    ScavTrap c;

    c = b;
    c = b;
    a.attack("bb");
    c.takeDamage(10);
    b.takeDamage(10);
    a.guardGate();
}