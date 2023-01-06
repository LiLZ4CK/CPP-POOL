/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 18:32:56 by zwalad            #+#    #+#             */
/*   Updated: 2022/10/04 19:15:47 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av)
{
    Harl x;
    if (ac != 2)
    {
        std::cout << "wrong number of args" << std::endl;
        return 0;
    }
    x.filter(av[1]);
    return 0;
}