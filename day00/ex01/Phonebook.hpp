/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 18:06:46 by zwalad            #+#    #+#             */
/*   Updated: 2022/10/30 13:37:17 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef		PHONEBOOK_HPP
# define	PHONEBOOK_HPP

#include    <iostream>
#include	<iomanip>
#include    <cctype>
#include	<string>
#include	"Contact.hpp"
#include	<fstream>

class PhoneBook
{
	private:
		Contact Contactt[8];
	public:
		void	putContact(int i);
		void	AddContact(int i);
		void	FindContact(std::string x);
		void	GetContact(int index)  const;
};

void	printLong(std::string buff);
int		ppStrlen(std::string buff);


#endif