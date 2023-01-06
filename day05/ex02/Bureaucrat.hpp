/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:24:39 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/25 21:14:57 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    BUREAUCRAT_HPP
# define    BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"
class Form;

class Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(std::string N, int G);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator = (const Bureaucrat &other);
		~Bureaucrat();
		void	signForm(Form &form);
		std::string	getName() const;
		int		getGrade() const;
		void	incrementGrade(void);
		void	decrementGrade(void);
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
		class BureaucratLowGrade : public std::exception
		{
			public: 
				const char* what() const throw();
		};
		void executeForm(Form const & form) const;
	private:
		const std::string Name;
		int Grade;
};
	std::ostream &operator << (std::ostream &out, const Bureaucrat &other);
	
#endif