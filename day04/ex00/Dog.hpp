/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 16:37:59 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/18 00:19:31 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
    public:
		Dog();
		~Dog();
		Dog(const Dog &other);
		Dog &operator = (const Dog &other);
		void    makeSound(void) const;
};

#endif