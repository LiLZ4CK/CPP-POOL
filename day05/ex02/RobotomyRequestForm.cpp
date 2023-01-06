/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:07:35 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/25 23:39:57 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <time.h>


RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45)
{
    target = "target";
}

RobotomyRequestForm::RobotomyRequestForm(const char* T) : Form("RobotomyRequestForm", 72, 45)
{
    target = T;
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other) : Form("RobotomyRequestForm", 72, 45)
{
    *this = other;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (const RobotomyRequestForm &other)
{
    this->target = other.target;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    Bureaucrat::BureaucratLowGrade L;
    Form::FormIsNotSigned F;
    if(getSignSt())
    {
        if (executor.getGrade() <= getEXGrade())
        {
            srand(time(0));
            int random = 1 + (rand() % 100);
            if (random % 2)
            {
                std::cout << target << " has been robotomized successfully" << std::endl;
            }
            else
                std::cout << "the robotomy failed" << std::endl;
        }
        else
            throw (L);
    }   
    else
        throw (F);
}
