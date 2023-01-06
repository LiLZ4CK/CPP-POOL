/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 19:34:45 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/18 16:01:04 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat entered your channel" << std::endl;
	Type = "Cat";
}

Cat::Cat(const Cat &other)
{
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat disconnected from your channel" << std::endl;
}

Cat &Cat::operator= (const Cat &other)
{

	this->Type = other.Type;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "MeoW" << std::endl;
}
