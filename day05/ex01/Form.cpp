/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:36:47 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/25 21:11:33 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : Name("Form"), reqGrade(150), exeGrade(75) 
{
    this->signSt = false;
}

Form::Form(const Form &other) : Name(other.Name), reqGrade(other.reqGrade), exeGrade(other.exeGrade)
{
    GradeTooLowException L;
    GradeTooHighException H;
    
    if (this->reqGrade > 150 || this->exeGrade > 150)
        throw (L);
    else if  (this->reqGrade < 1 || this->exeGrade < 1)
        throw (H);
    else
    this->signSt = false;
}

Form::Form(const char* N, int rG, int eG) :  Name(N), reqGrade(rG), exeGrade(eG)
{
    GradeTooLowException L;
    GradeTooHighException H;
    
    if (this->reqGrade > 150 || this->exeGrade > 150)
        throw (L);
    else if  (this->reqGrade < 1 || this->exeGrade < 1)
        throw (H);
    else
    this->signSt = false;
}

Form::~Form()
{
    
}

Form &Form::operator =(const Form &other)
{
    //nop
    (void)other;
    return *this;
}

std::string Form::getName(void) const
{
    return Name;
}

int Form::getRQGrade(void) const
{
    return reqGrade;
}

int Form::getEXGrade(void) const
{
    return exeGrade;
}

bool Form::getSignSt(void) const
{
    return signSt;
}

const char* Form::GradeTooHighException::what() const throw()
{
    return ("→ The Form's grade is too High");
}

const char* Form::GradeTooLowException::what() const throw()
{
    return ("→ The Form's grade is too Low");
}

void    Form::beSigned(const Bureaucrat &Biro)
{
    Bureaucrat::GradeTooLowException L;
    Biro.signForm(*this);
    if (Biro.getGrade() <= reqGrade)
        signSt = true;
    else
        throw (L);
}

std::ostream &operator << (std::ostream &out,const  Form &other)
{
    out << other.getName() << " , form req grade is " << other.getRQGrade() << ", and exe grade is " << other.getEXGrade() << std::endl;
    return out;
}
