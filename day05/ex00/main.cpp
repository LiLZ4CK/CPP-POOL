 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:24:41 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/22 23:27:03 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Bureaucrat a("ahmed", 11);
        std::cout << a << std::endl;
        a.decrementGrade();
        std::cout << a << std::endl;
        a.decrementGrade();
        std::cout << a << std::endl;
        a.decrementGrade();
        std::cout << a << std::endl;
        a.decrementGrade();
        std::cout << a << std::endl;
        a.decrementGrade();
        std::cout << a << std::endl;
        a.decrementGrade();
        std::cout << a << std::endl;
        a.decrementGrade();
        std::cout << a << std::endl;
        a.incrementGrade();
        std::cout << a << std::endl;
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
}
