/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:34:50 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/17 20:53:09 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal entered your channel" << std::endl;
    this->Type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(const WrongAnimal &other)
{
    *this = other;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Animal disconnected from your channel" << std::endl;
}

WrongAnimal &WrongAnimal::operator= (const WrongAnimal &other)
{
    this->Type = other.Type;
    return *this;
}

void WrongAnimal::makeSound(void) const
{
	std::cout << "BLA BLa BLA" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return this->Type;
}