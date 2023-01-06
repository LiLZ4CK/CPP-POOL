/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:18:05 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/25 23:09:02 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"
#include <fstream>

class Bureaucrat;

class Form
{
	public:
		Form();
		Form(const Form &other);
		Form(const char* N, int rG, int eG);
		Form &operator = (const Form &other);
		virtual void execute(Bureaucrat const & executor) const = 0;
		~Form();
		int 		getRQGrade(void) const;
		int 		getEXGrade(void) const;
		std::string getName(void) const;
		bool		getSignSt(void) const;
		void beSigned(Bureaucrat &Biro);
		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public: 
				const char* what() const throw();
		};
		class FormIsNotSigned : public std::exception
		{
			public: 
				const char* what() const throw();
		};
	private:
		const std::string   Name;
		bool				signSt;
		const int			reqGrade;
		const int			exeGrade;
};
std::ostream &operator << (std::ostream out, const Form &other);

#endif