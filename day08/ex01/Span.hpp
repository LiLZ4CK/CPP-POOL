/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 20:56:40 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/12 23:18:43 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	public:
		Span();
		Span(const Span& other);
		Span(unsigned int n);
		~Span();
		unsigned int	shortestSpan()const;
		unsigned int	longestSpan()const;
		void addNumber(int i);
		int size()const;
		Span &operator = (const Span& other);
		unsigned int getN()const;
		void addNumbers();
	private:
		unsigned int N;
		std::vector<int> array;
};
#endif