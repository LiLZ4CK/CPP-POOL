/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 01:15:20 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/08 00:01:37 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template<class T > 
class Array {
public:
	Array()
	{
		array = new T;
		sizze = 0;
	}
	Array(unsigned int n)
	{
		if(static_cast<int>(n) < 0)
			throw std::out_of_range("Out of Range");
		array = new T[n]();
		sizze = n;
		for(unsigned int i = 0; i < n ; i++)
			array[i] = 0;
	}
	Array(const Array &other)
	{
		this->sizze = other.size();
		this->array = new T[other.size()];
		for(int i = 0; i < other.size(); i++)
			array[i] = other.array[i];
	}
	Array& operator = (const Array &other)
	{
		if(array)
			delete[] array;
		array = new T[other.size()];
		sizze = other.size();
		for(int i = 0; i < other.size(); i++)
			array[i] = other.array[i];
		return *this;
	}
	T &operator [] (unsigned int i)
	{
		if(i >= sizze )
			throw std::out_of_range("Out of Range");
		return array[i];
	}
	const T &operator [] (unsigned int i) const
	{
		if(i >= sizze )
			throw std::out_of_range("Out of Range");
		return array[i];
	}
	unsigned int size(void) const {
		return sizze;
	}
private:
	unsigned int sizze;
	T *array;
};