/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:23:40 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/17 23:20:32 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal entered your channel" << std::endl;
    Type = "Animal";
}

Animal::Animal(const Animal &other)
{
    *this = other;
}

Animal::~Animal()
{
    std::cout << "Animal disconnected from your channel" << std::endl;
}

Animal &Animal::operator= (const Animal &other)
{
    this->Type = other.Type;
    return *this;
}

std::string	Animal::getType(void) const
{
	return Type;
}