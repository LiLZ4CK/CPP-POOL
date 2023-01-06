/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:06:30 by zwalad            #+#    #+#             */
/*   Updated: 2022/10/30 12:28:46 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef     CONTACT_HPP
# define    CONTACT_HPP

#include    <iostream>

#include	<iomanip>
#include    <cctype>
#include	<string>
#include	<fstream>

class Contact
{
	private:
		std::string	Number;
		std::string	FirstName;
		std::string	LastName;
		std::string	NickName;
		std::string	DarkestSecret;
	public:
		int	SetNumber(std::string buff);
		int	SetFirstName(std::string buff);
		int	SetLastName(std::string buff);
		int	SetNickName(std::string buff);
		int	SetDarkestSecret(std::string buff);
		std::string	GetNumber(void) const;
		std::string	GetFirstName(void) const;
		std::string	GetLastName(void) const;
		std::string	GetNickName(void) const;
		std::string	GetDarkestSecret(void) const;
};

#endif