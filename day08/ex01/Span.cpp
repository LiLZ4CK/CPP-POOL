/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 22:29:17 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/13 01:19:26 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <time.h>

Span::Span()
{
	N = 0;
}

Span::Span(const Span& other)
{
	*this = other;
}

Span::Span(unsigned int n)
{
	if ((int)n < 0)
		throw std::exception();
	N = n;
}

Span::~Span()
{
	
}

unsigned int Span::getN() const
{
	return N;
}

Span &Span::operator = (const Span& other)
{
	array.clear();
	this->array = other.array;
	this->N = other.getN();
	return *this;
}

void Span::addNumber(int i)
{
	if(array.size() == N)
		throw std::exception();
	array.push_back(i);
}

unsigned int Span::shortestSpan() const
{
	try
	{
		if(array.size() <= 1)
			throw std::exception();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << ": not enough elements" << std::endl;
		exit(1);
	}
	std::vector<int> tmp = array;
	std::sort(tmp.begin(), tmp.end());
	std::vector<int>::iterator p = tmp.begin();
	std::vector<int>::iterator q = p + 1;
	int x = *q - *p;
	while(q != tmp.end())
	{
		if (*q - *p <= x)
			x = *q - *p;
		p++;
		q = p + 1;
	}
	return x;
}

unsigned int Span::longestSpan() const
{
	try
	{
		if(array.size() <= 1)
			throw std::exception();
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << ": not enough elements" << std::endl;
		exit(1);
	}
	std::vector<int> tmp = array;
	std::sort(tmp.begin(), tmp.end());
	return ((unsigned int)*(tmp.end() - 1) - (unsigned int)*(tmp.begin()));
}

void Span::addNumbers()
{
	std::vector<int> a;
	srand(time(0));
	for(int i = 0; i < 10002; i++)
		a.push_back(rand());
	if (array.size() == N)
		throw std::exception();
	std::vector<int>::iterator it = a.begin();
	std::vector<int>::iterator ite = a.end();
	int i = array.size();
	while (it != ite && i < (int)N)
	{
		array.insert(array.end(), *it);
		it++;
		i++;
	}
}

int Span::size()const
{
	return array.size();
}