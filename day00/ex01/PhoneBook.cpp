/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:06:41 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/04 14:25:25 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void printLong(std::string buff)
{
	int j = 0;
	while(j < 9)
		std::cout << buff[j++];
	std::cout << ".|";
}

int ppStrlen(std::string buff)
{
	int i = 0;
	while(buff[i])
		buff[i++];
	return i;
}

void PhoneBook::GetContact(int index)  const
{
	int i = 0;
	int j = 0;
	int k;
	int indx;
	std::string buff;

	if (index == 0)
	{
		std::cout << "there is no contact !!\n";
		return;
	}
	std::cout << std::setw(10) << "index" << std::setfill (' ') << '|';
	std::cout << std::setw(10) << "first name" << std::setfill (' ') << '|';
	std::cout << std::setw(10) << "last name" << std::setfill (' ') << '|';
	std::cout << std::setw(10) << "nickname" << std::setfill (' ') << '|' << std::endl;
	while(i < index)
	{
		std::cout << std::setw(10) << i << std::setfill (' ') << '|';
		if (ppStrlen(this->Contactt[i].GetFirstName()) > 10)
			printLong(this->Contactt[i].GetFirstName());
		else
			std::cout << std::setw(10) << this->Contactt[i].GetFirstName() << std::setfill (' ') << '|';
		if (ppStrlen(this->Contactt[i].GetLastName()) > 10)
			printLong(this->Contactt[i].GetLastName());
		else
			std::cout << std::setw(10) << this->Contactt[i].GetLastName() << std::setfill (' ') << '|';
		if (ppStrlen(this->Contactt[i].GetNickName()) > 10)
			printLong(this->Contactt[i].GetNickName());
		else
			std::cout << std::setw(10) << this->Contactt[i].GetNickName() << std::setfill (' ') << '|';
		std::cout << std::endl;
		i++;
	}
	j = 0;
	while(j < 1)
	{
		k = 0;
		std::cout << "please enter the index: ";
		std::getline(std::cin, buff);
		if (std::cin.eof())
			std::exit(0);
		while(buff[k])
			buff[k++];
		if (k == 1)
		{
			if (isdigit(buff[0]) && buff[0] < (index + '0'))
				j++;
			else
				std::cout << "invalid index ! try again !!" << std::endl;
		}
		else
			std::cout << "invalid index ! try again !!" << std::endl;
	}
	indx = buff[0] - '0';
	std::cout << "contact index : " << indx << std::endl;
	std::cout << "first name : " << this->Contactt[indx].GetFirstName() << std::endl;
	std::cout << "last name : " << this->Contactt[indx].GetLastName() << std::endl;
	std::cout << "nick name : " << this->Contactt[indx].GetNickName() << std::endl;	
	std::cout << "Number : " << this->Contactt[indx].GetNumber() << std::endl;	
	std::cout << "darkest DarkestSecret : " << this->Contactt[indx].GetDarkestSecret() << std::endl;	
}

void PhoneBook::AddContact(int j)
{
	int i = 0;
	std::string buff;
 
	
	while (i == 0)
	{
		std::cout << "please enter the first name : ";
		std::getline(std::cin, buff); 
		if (std::cin.eof())
			std::exit(0);
		if (this->Contactt[j].SetFirstName(buff))
			i++;
	}
	while (i == 1)
	{
		std::cout << "please enter the last name : ";
		std::getline(std::cin, buff);
		if (std::cin.eof())
			std::exit(0);
		if (this->Contactt[j].SetLastName(buff))
			i++;
	}
	while (i == 2)
	{
		std::cout << "please enter the nickname : ";
		std::getline(std::cin, buff);
		if (std::cin.eof())
			std::exit(0);
		if (this->Contactt[j].SetNickName(buff))
			i++;
	}
	while (i == 3)
	{
		std::cout << "please enter darkes DarkestSecret : ";
		std::getline(std::cin, buff);
		if (std::cin.eof())
			std::exit(0);
		if (this->Contactt[j].SetDarkestSecret(buff))
			i++;
	}
	while (i == 4)
	{
		std::cout << "please enter the number : ";
		std::getline(std::cin, buff);
		if (std::cin.eof())
			std::exit(0);
		if (this->Contactt[j].SetNumber(buff))
			i++;
	}
}