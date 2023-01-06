/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:06:36 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/20 16:19:31 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;
    const Animal* a[100];
    for (int i = 0; i < 50; i++)
        a[i] = new Dog();
    for (int i = 50; i < 100; i++)
        a[i] = new Cat();
    for (int i = 0; i < 100; i++)
        delete a[i];
           
    Cat k;
    Cat y;
    k.setter("meooow");
    y.setter("wwwwwwww");
    y = k;
    k.setter("0000000");
    std::cout << "k = " << k.getter() << std::endl;
    std::cout << "y = " << y.getter() << std::endl;
    return 0;
}

/* int main()
{
    man();
    system("leaks Animal");
} */