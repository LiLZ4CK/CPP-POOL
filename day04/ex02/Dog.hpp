/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:24:51 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/18 00:19:58 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

#include "Brain.hpp"

class Dog : public Animal
{
    public:
		Dog();
		virtual ~Dog();
		Dog(const Dog &other);
		Dog &operator = (const Dog &other);
		void    makeSound(void) const;
	private:
		Brain   *BrainD;
};

#endif
