/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 22:33:33 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/13 01:21:02 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <stack>
int main()
{
	try
	{
		Span sp = Span(12);
		sp.addNumber(126);
		sp.addNumber(23);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		//sp.addNumbers();
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		//std::cout << sp.size() << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << ": baarakaa !!" << std::endl;
	}
}