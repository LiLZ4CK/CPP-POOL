/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:06:34 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/13 21:52:56 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	PhoneBook obj;
	std::string buff;
	int i = 0;
	int j = 0;
	int k = 1;

	while (i <= 7)
	{
		if (k == 1)
		{
			std::cout << "_____________________________" << std::endl;
			std::cout << "|      type a command       |" << std::endl;
			std::cout << "|___________________________|" << std::endl;
			std::cout << "| ADD ➕|SEARCH 🔍 | EXIT 🚪|" << std::endl;
			std::cout << "|_______|__________|________|" << std::endl;
			k = 0;
		}
		std::cout << "PoneBook 📞: ";
		std::getline(std::cin, buff);
		if (std::cin.eof())
			return 0;
		else if (buff == "ADD")
		{
			obj.AddContact(i);
			i++;
			if(j <= 7)
				j++;
			k = 1;
		}
		else if (buff == "SEARCH")
		{
			obj.GetContact(j);
			k = 1;
		}
		else if (buff == "EXIT")
			return 0;
		else
			std::cout << "wrong command !!\n";
		if(i == 8)
			i = 0;
	}
}