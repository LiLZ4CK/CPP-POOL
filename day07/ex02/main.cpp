/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwalad <zwalad@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:57:53 by zwalad            #+#    #+#             */
/*   Updated: 2022/12/08 00:06:51 by zwalad           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
    Array<int>arr(7);
    Array<int>arr1;
    for(int i = 0; i < arr.size(); i++)
        arr[i] = i * 11;
    arr1 = arr;
    prnt(arr);
    prnt(arr1);
    for(int i = 0; i < arr.size(); i++)
        arr[i] = i;
    prnt(arr);
    prnt(arr1);
    Array<char>ar(4);
    Array<char>ar1;
    for(int i = 0; i <ar.size(); i++)
        ar[i] = 'a' + i;
    ar1 = ar;   
    prnt(ar);
    prnt(ar1);
    for(int i = 0; i <ar.size(); i++)
        ar[i] = 'a' + i + ar.size();
    prnt(ar);
    prnt(ar1);
}

/* #define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
} */