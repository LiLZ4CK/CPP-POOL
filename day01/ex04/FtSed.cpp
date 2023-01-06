/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtSed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:49:15 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/10 13:13:28 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "FtSed.hpp"

void FtSed::FtReplace(void)
{
	int j = 0;
	size_t i;

	while (std::getline(file, buff))
	{
		if (j != 0)
			replace << '\n';
		i = buff.find(s1);
		if (i < buff.size() && s1.size() > 0)
		{
			while (i < buff.size())
			{
				buff.erase(i, s1.size());
				buff.insert(i, s2);
				i = buff.find(s1, i + s2.size());
			}
		}
		replace << buff;
		buff.clear();
		j++;
	}
	
}

FtSed::FtSed(char **av)
{
	std::string buuff;
	std::ifstream check(av[1]);

	fileName = av[1];
	s1 = av[2];
	s2 = av[3];
	if (check.is_open())
	{
		newFile = fileName + ".replace";
		getline(check, buuff);
		if (!buuff.size())
		{
			std::cerr << fileName << " is an empty file" << std::endl;
			std::exit(1);
		}
		file.open(fileName);
		replace.open(newFile);
    	FtReplace();
	}
	else
		std::cerr << "i cant read this file : " << fileName << std::endl;
	
}

FtSed::~FtSed()
{
	
}
