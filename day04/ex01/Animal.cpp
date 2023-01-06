/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:06:18 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/17 23:13:36 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal entered your channel" << std::endl;
    this->Type = "Animal";
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

void Animal::makeSound(void) const
{
	std::cout << "ANIMAAAAAL" << std::endl;
}

std::string	Animal::getType(void) const
{
	return this->Type;
}