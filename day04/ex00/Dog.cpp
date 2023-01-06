/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:13:46 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/18 00:19:11 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog entered your channel" << std::endl;
	this->Type = "Dog";
}

Dog::Dog(const Dog &other)
{
	*this = other;
}

Dog::~Dog()
{
	std::cout << "Dog disconnected from your channel" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
	this->Type = other.Type;
	return *this;
}

void Dog::makeSound(void) const
{
	std::cout << "Woof" << std::endl;
}
