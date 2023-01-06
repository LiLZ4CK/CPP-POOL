/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:06:28 by zwalad            #+#    #+#             */
/*   Updated: 2022/10/30 12:28:36 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include	"Phonebook.hpp"

int	Contact::SetFirstName(std::string buff)
{
	if (buff[0] != '\0' && buff[0] != '\n' && buff[0] != 0 && buff[0] != ' ')
	{
		FirstName = buff;
		return 1;
	}
	return 0;
}

int	Contact::SetLastName(std::string buff)
{
	if (buff[0] != '\0' && buff[0] != '\n' && buff[0] != 0 && buff[0] != ' ')
	{
		LastName = buff;
		return 1;
	}
	return 0;
}

int	Contact::SetNickName(std::string buff)
{
	if (buff[0] != '\0' && buff[0] != '\n' && buff[0] != 0 && buff[0] != ' ')
	{
		NickName = buff;
		return 1;
	}
	return 0;
}

int	Contact::SetDarkestSecret(std::string buff)
{
	if (buff[0] != '\0' && buff[0] != '\n' && buff[0] != 0 && buff[0] != ' ')
	{
		DarkestSecret = buff;
		return 1;
	}
	return 0;
}

int	Contact::SetNumber(std::string buff)
{
	int i = 0;

	while (buff[i])
	{
		if(isdigit(buff[i]) == 0)
		{
			std::cout << "The number must be only degits !!!\n";
			return 0;
		}
		i++;
	}
	if (i != 10)
	{
		std::cout << "The number must be 10 degits !!!\n";
		return 0;
	}
	if (buff[0] != '\0' && buff[0] != '\n' && buff[0] != 0)
	{
		Number = buff;
		return 1;
	}
	return 0;
}

std::string	Contact::GetNumber(void) const
{
	return Number;
}

std::string	Contact::GetFirstName(void) const
{
	return FirstName;
}

std::string	Contact::GetLastName(void) const
{
	return LastName;
}

std::string	Contact::GetNickName(void) const
{
	return NickName;
}

std::string	Contact::GetDarkestSecret(void) const
{
	return DarkestSecret;
}

