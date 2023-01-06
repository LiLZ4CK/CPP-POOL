/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 23:06:35 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/18 00:19:48 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Brain.hpp"

class Dog : public Animal
{
    public:
		Dog();
		Dog(const Dog &other);
		Dog &operator = (const Dog &other);
		virtual ~Dog();
		void    makeSound(void) const;
	private:
		Brain   *BrainD;
};

#endif