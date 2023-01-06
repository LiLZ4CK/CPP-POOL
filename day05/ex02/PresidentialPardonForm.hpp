/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 18:27:41 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/25 20:01:22 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDNETIALPARDONFORM_HPP
# define PRESIDNETIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
    public:
        void    execute(Bureaucrat const & executor) const;
        PresidentialPardonForm();
        PresidentialPardonForm(const char* T);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        PresidentialPardonForm &operator = (const PresidentialPardonForm &other);
        ~PresidentialPardonForm();
    private:
        std::string target;
};

#endif