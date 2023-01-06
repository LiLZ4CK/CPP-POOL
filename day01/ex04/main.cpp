/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:49:22 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/09 20:00:51 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "FtSed.hpp"

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cout << "you must enter 3 arguments" << std::endl;
        return 0;
    }
    FtSed FS(av);  
}