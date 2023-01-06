/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/30 20:22:34 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/20 02:28:49 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "Cat.hpp"
#include    "Dog.hpp"
#include 	"WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* Wrongi = new WrongCat();
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << Wrongi->getType() << " " << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	Wrongi->makeSound(); //will output the Wrongcat sound!
	meta->makeSound();
	delete i;
	delete Wrongi;
	delete j;
	delete meta;
	return 0;
}

/* int main()
{
	man();
	system("leaks Animal");
} */