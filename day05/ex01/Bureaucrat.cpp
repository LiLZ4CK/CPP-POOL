/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 21:24:37 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/25 21:11:00 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): Name("Bureaucrat")
{
    Grade = 75;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    GradeTooLowException L;
    GradeTooHighException H;
    
    if (other.Grade > 150)
        throw L;
    else if (other.Grade < 1)
        throw H;
    else
        *this = other;
    
}

Bureaucrat &Bureaucrat::operator = (const Bureaucrat &other)
{
    GradeTooLowException L;
    GradeTooHighException H;
    
    if (other.Grade > 150)
        throw L;
    else if (other.Grade < 1)
        throw H;
    else
        this->Grade = other.Grade;
    return *this;
}

Bureaucrat::Bureaucrat(std::string N, int G) : Name(N)
{
    GradeTooLowException L;
    GradeTooHighException H;
    
    if (G > 150)
        throw L;
    else if (G < 1)
        throw H;
    else
        Grade = G;
}

Bureaucrat::~Bureaucrat()
{
    
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("→ The Bureaucrat's grade is too High");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("→ The Bureaucrat's grade is too Low");
}

void	Bureaucrat::incrementGrade(void)
{
    GradeTooHighException H;
    
    if (this->Grade - 1 < 1)
        throw H;
    else
        this->Grade--;
}

void	Bureaucrat::decrementGrade(void)
{
    GradeTooLowException L;
    
    if (this->Grade + 1 > 150)
        throw L;
    else
        this->Grade++;
}
int Bureaucrat::getGrade(void) const
{
    return this->Grade;
}

std::string Bureaucrat::getName(void) const
{
    return this->Name;
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &other)
{
    out << other.getName() << ", bureaucrat grade " << other.getGrade();
    return out;
}

void    Bureaucrat::signForm(Form &form) const
{
    if(form.getRQGrade() >= this->Grade)
        std::cout << this->Name << " signed " << form.getName() << std::endl;
    else
        std::cout << this->Name << " couldn’t sign " << form.getName() << " cuz the Form req grade " << form.getRQGrade() << " is higher than the Burc..'s grade " << this->getGrade() << std::endl;
}
