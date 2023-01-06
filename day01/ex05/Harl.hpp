/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 17:43:41 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/09 22:11:56 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
    private:
        
        std::string levels[4];
        void    error(void);
        void    debug(void);
        void    info(void);
        void    warning(void);
    public:
        void    init(void);
        void    complain(std::string level);
        void    (*ptr[]) (void);
        Harl();
};

#endif