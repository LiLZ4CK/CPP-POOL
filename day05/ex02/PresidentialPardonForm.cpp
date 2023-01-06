/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:27:37 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/25 23:46:54 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
    target = "target";
}

PresidentialPardonForm::PresidentialPardonForm(const char* T) : Form("PresidentialPardonForm", 25, 5)
{
    target = T;
}
PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other) : Form("PresidentialPardonForm", 25, 5)
{
    *this = other;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (const PresidentialPardonForm &other)
{
    this->target = other.target;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
    Bureaucrat::BureaucratLowGrade L;
    Form::FormIsNotSigned F;

    if(getSignSt())
    {
        if (executor.getGrade() <= getEXGrade())
            std::cout << target <<  " has been pardoned by Zaphod Beeblebrox" << std::endl;
        else
            throw (L);
    }   
    else
        throw (F);
}