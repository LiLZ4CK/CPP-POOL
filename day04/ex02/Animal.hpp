/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:23:56 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/20 02:25:50 by zwalad           ###   ########.fr       */
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
		virtual std::string	getType(void) const;
		virtual void	makeSound(void) const = 0;
	protected:
		std::string Type;
};

#endif