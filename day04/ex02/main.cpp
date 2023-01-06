/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 02:25:03 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/20 02:27:48 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	/* 
	const Animal* meta = new Animal(); */
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;/* 
	std::cout << meta->getType() << " " << std::endl; */
	i->makeSound(); //will output the cat sound!
	j->makeSound();/* 
	meta->makeSound(); */
	delete i;
	delete j;/* 
	delete meta; */
	return 0;
}

/* int main()
{
	man();
	system("leaks Animal");
} */
