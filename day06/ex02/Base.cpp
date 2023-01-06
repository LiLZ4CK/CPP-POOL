/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 19:18:49 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/06 00:17:47 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>

Base::~Base()
{
    
}

Base *generate(void)
{
    srand(time(NULL));
    int j = rand() % 3;
    switch(j)
    {
        case 0:
        {
            Base *a = new A();
            return a;
        }
        case 1:
        {
            Base *b = new B();
            return b;   
        }
        case 2:
        {
            Base *c = new C();
            return c;
        }
    }
    return NULL;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p) != nullptr)
        std::cout << "this a pointer of A" << std::endl;
    else if (dynamic_cast<B*>(p) != nullptr)
        std::cout << "this a pointer of B" << std::endl;
    else if (dynamic_cast<C*>(p) != nullptr)
        std::cout << "this a pointer of C" << std::endl;
    else
        std::cout << "pointer khor" << std::endl;
}
void identify(Base &p)
{
    A a;
    B b;
    C c;

    try
    {
        a = dynamic_cast<A&>(p);
        std::cout << "this is a reference of A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            b = dynamic_cast<B&>(p);
            std::cout << "this is a reference of B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                c = dynamic_cast<C&>(p);
                std::cout << "this is a reference of C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cout << "3alam khor !!" << std::endl;
            }
        }
    }
}