/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 22:08:04 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/25 22:39:37 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
    public:
        void    execute(Bureaucrat const & executor) const;
        RobotomyRequestForm();
        RobotomyRequestForm(const char* T);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        RobotomyRequestForm &operator = (const RobotomyRequestForm &other);
        ~RobotomyRequestForm();
    private:
        std::string target;
};

#endif