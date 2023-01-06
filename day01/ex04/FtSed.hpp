/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FtSed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 13:49:19 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/09 23:51:14 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTSED_HPP
# define FTSED_HPP

#include    <iostream>
#include	<iomanip>
#include    <cctype>
#include	<string>
#include	<fstream>

class FtSed
{
	private:
		
		std::string		fileName;
		std::string		s1;
		std::string		buff;
		std::string		s2;
		std::string		newFile;
		std::ifstream 	file;
		std::ofstream 	replace;
	public:
		void	FtReplace(void);
		void	CharReplace(void);
	FtSed(char **av);
	~FtSed();
};

#endif