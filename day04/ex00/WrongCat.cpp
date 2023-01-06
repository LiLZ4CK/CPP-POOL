/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 20:34:54 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/17 22:32:57 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	std::cout << "WrongCat entered your channel" << std::endl;
	Type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &other)
{
	*this = other;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat disconnected from your channel" << std::endl;
}

WrongCat &WrongCat::operator= (const WrongCat &other)
{
	this->Type = other.Type;
	return *this;
}

void    WrongCat::makeSound(void) const
{
	std::cout << "HHHHHHHHHHHHHHHHHHH" << std::endl;
}
