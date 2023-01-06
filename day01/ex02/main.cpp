/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 14:35:41 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/09 22:52:49 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "The memory address of the string variable :  " << &str << std::endl;
    std::cout << "The memory address held by stringPTR :       " << stringPTR << std::endl;
    std::cout << "The memory address held by stringREF :       " << &stringREF << std::endl;
    std::cout << "#############################################" << std::endl;
    std::cout << "The value of the string variable :           " << str << std::endl;
    std::cout << "The value pointed to by stringPTR :          " << *stringPTR << std::endl;
    std::cout << "The value pointed to by stringREF :          " << stringREF << std::endl;
    
}