/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:06:21 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/18 16:31:44 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
	public:
		Animal();
		Animal(const Animal &other);
		Animal &operator = (const Animal &other);
		virtual ~Animal();
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
	protected:
		std::string Type;
};

#endif