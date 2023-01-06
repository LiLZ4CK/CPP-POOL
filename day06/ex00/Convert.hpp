/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:23:23 by zwalad            #+#    #+#             */
/*   Updated: 2022/11/28 18:09:33 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>

enum typee
{
    ezero,
    echar,
    eint,
    efloat,
    edouble 
};

class Convert
{
    public:
        class WrongInput : public std::exception
        {
            const char *what()const throw();
        };
        int cheecker(std::string av);
        void checkType(std::string av);
        void conve(void);
        int     i;
        char    c;
        float   f;
        double  d;
        int     t;
        void   (*ptr[]) (void);
        void theInt(void);
        void theChar(void);
        void theFloat(void);
        void theDouble(void);
    
};

#endif