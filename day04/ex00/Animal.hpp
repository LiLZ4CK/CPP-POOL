/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 14:53:22 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/18 16:31:42 by zwalad           ###   ########.fr       */
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
		virtual void	makeSound(void) const;
		std::string		getType(void) const;
	protected:
		std::string Type;
};

#endif