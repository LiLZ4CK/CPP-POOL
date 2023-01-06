/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:22:55 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/06 00:21:30 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int Convert::cheecker(std::string av)
{
	Convert::WrongInput W;
	int p = 0;
	int f = 0;
	int i = 0;
	if (isprint(av[0]) && !isdigit(av[0]) && (av[0] != '-' && av[0] != '+'))
	{
		if(av.size() == 1)
			return echar;
		else
			throw(W);
	}
	else
	{
		if(av[0] == '-' || av[0] == '+')
			i++;
		while(av[i])
		{
			if (av[i] == 'f' || av[i] == 'F')
				f++;
			else if (av[i] == '.')
				p++;
			else if(!isdigit(av[i]))
				throw(W);
			i++;
		}
	}
	if(f > 1 || p > 1 || f > p)
		throw(W);
	if(f == 1 && p == 1)
	{
		if ((av[av.size() - 1] != 'f' && av[av.size() - 1] != 'F') || av[0] == '.' || av[av.size() - 1] == '.' || ((av[av.size() - 2] == '.' && av[av.size() - 1] == 'f')))
			throw(W);
		else
			return efloat;
	}
	else if(p == 1 && f == 0)
	{
		if(av[0] == '.' || av[av.size() - 1] == '.')
			throw(W);
		else
			return edouble;
	}
	else
		return eint;
}

void    Convert::theChar(void)
{
	std::cout << "char: '" << this->c << "'" <<std::endl;
	std::cout << "int: " << static_cast<int>(this->c) << std::endl;
	std::cout << "float: " << static_cast<float>(this->c) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(this->c) << ".0" << std::endl;
}

void    Convert::theInt(void)
{
	if (isprint(this->i))
		std::cout << "char: '" << static_cast<char>(this->i)  << "'" <<std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << this->i << std::endl;
	std::cout << "float: " << static_cast<float>(this->i) << ".0f" << std::endl;
	std::cout << "double: " << static_cast<double>(this->i) << ".0" << std::endl;
}

void    Convert::theFloat(void)
{
	if (isprint(this->f))
		std::cout << "char: '" << static_cast<char>(this->f) << "'" <<std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(this->f) << std::endl;
	std::cout << "float: " << std::showpoint << this->f << "f" << std::endl;
	std::cout << "double: " << std::showpoint << static_cast<double>(this->f) << std::endl;
}

void    Convert::theDouble(void)
{
	if (isprint(this->d))
		std::cout << "char: '" << static_cast<char>(this->d) << "'" <<std::endl;
	else
		std::cout << "char: " << "Non displayable" << std::endl;
	std::cout << "int: " << static_cast<int>(this->d) << std::endl;
	std::cout << "float: " << std::showpoint <<  static_cast<float>(this->d)<< "f" << std::endl;
	std::cout << "double: " << std::showpoint << this->d << std::endl;
}

void infnan(std::string av)
{
	if (av == "-inff" || av == "+inff" || av == "nanf" 
		|| av == "-inf" || av == "+inf" || av == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		if(av == "-inff" || av == "+inff" || av == "nanf")
		{
			std::cout << "float: " <<  av << std::endl;
			std::cout << "double: " << av.erase(av.size() - 1) << std::endl;
		}
		else if(av == "-inf" || av == "+inf" || av == "nan")
		{
			std::cout << "float: " <<  av << "f" << std::endl;
			std::cout << "double: " << av << std::endl;
		}
		exit(1);
	}
}

void Convert::checkType(std::string av)
{
	void (Convert::*ptr[4]) (void) ={&Convert::theChar, &Convert::theInt, &Convert::theFloat, &Convert::theDouble};
	infnan(av);
	int t = cheecker(av);
	switch(t)
	{
		case echar :
			this->c = av[0];
			(this->*ptr[0])();
			break;
		case eint :
			this->i = atoi(av.c_str());
			(this->*ptr[1])();
			break;
		case efloat :
			this->f = (float)std::stof(av);
			(this->*ptr[2])();
			break;
		case edouble :
			this->d = (double)std::stod(av);
			(this->*ptr[3])();
			break;
	}
}


const char *Convert::WrongInput::what() const throw()
{
	return("wrong input !!");
}
