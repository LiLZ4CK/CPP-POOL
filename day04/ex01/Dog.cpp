/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:06:34 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/19 21:04:42 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog entered your channel" << std::endl;
	Type = "Dog";
	BrainD = new Brain();
}

Dog::Dog(const Dog &other)
{
	this->BrainD = new Brain();
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Dog disconnected from your channel" << std::endl;
	delete this->BrainD;
}

Dog &Dog::operator=(const Dog &other)
{
	this->Type = other.Type;
	if (this->BrainD)
		delete this->BrainD;
	this->BrainD = new Brain();
	*this->BrainD = *other.BrainD;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
