/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/10 02:03:23 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/13 00:22:19 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include	<iostream>
#include	<vector>
#include	<stack>
#include 	<algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack(){}
	MutantStack(const MutantStack& other){*this = other;}
	MutantStack &operator = (const MutantStack& other){this->c = other.c;
		return *this;}
	~MutantStack(){}
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator end()
	{
		return this->c.end();
	}
	
	iterator begin()
	{
		return this->c.begin();
	}
};

#endif