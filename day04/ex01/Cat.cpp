/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:06:24 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/20 02:08:31 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat entered your channel" << std::endl;
	this->Type = "Cat";
	this->BrainC = new Brain();
}

Cat::Cat(const Cat &other)
{
	this->BrainC = new Brain();
	*this = other;
}

Cat::~Cat()
{
	std::cout << "Cat disconnected from your channel" << std::endl;
	delete this->BrainC;
}

Cat &Cat::operator= (const Cat &other)
{
	this->Type = other.Type;
	if (this->BrainC)
		delete this->BrainC;
	this->BrainC = new Brain();
	*this->BrainC = *other.BrainC;
	return *this;
}

void Cat::makeSound(void) const
{
	std::cout << "MeoW" << std::endl;
}
