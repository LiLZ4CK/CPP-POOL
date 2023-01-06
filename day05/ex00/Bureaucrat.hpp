/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:24:39 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/24 21:53:33 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef    BUREAUCRAT_HPP
# define    BUREAUCRAT_HPP

#include <iostream>
#include <exception>

class Bureaucrat
{
	public:
		std::string	getName() const;
		int		getGrade() const;
		Bureaucrat();
		Bureaucrat(std::string N, int G);
		Bureaucrat(const Bureaucrat &other);
		Bureaucrat &operator = (const Bureaucrat &other);
		~Bureaucrat();
		void checkGrade(void);
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
		void	incrementGrade(void);
		void	decrementGrade(void);
	private:
		const std::string Name;
		int Grade;
};
	std::ostream &operator << (std::ostream &out, const Bureaucrat &other);
	
#endif