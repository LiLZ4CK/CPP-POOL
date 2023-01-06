/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 18:08:13 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/15 21:53:58 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    
    ClapTrap a("claaap");
    ClapTrap b("traaap");

    a.attack("traaap");
    /*a.printStatus(); */
    b.takeDamage(10);
    a.attack("traaap");
    b.takeDamage(10);
    a.beRepaired(10);
}
