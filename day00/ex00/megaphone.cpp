/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:06:01 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/04 12:06:47 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    <iostream>
#include    <cctype>

int main(int ac, char **av)
{
    int     i;
    int     j;
    char    c;

    i = 1;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while(i < ac)
        {
            j = 0;
            while(av[i][j])
            {
                c = toupper(av[i][j++]);
                std::cout << c;
            }
            i++;
        }
    }
    std::cout << std::endl;
}