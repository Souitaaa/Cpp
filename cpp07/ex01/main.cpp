/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:32:43 by csouita           #+#    #+#             */
/*   Updated: 2025/07/17 17:30:02 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "iter.hpp"
void increment(int& n)
{
    n += 1;
}
template<typename T>
void print(T& n)
{
    std::cout << n << std::endl;
}

void toUpperCase(char& c)
{
    c = std::toupper(c);
}

int main()
{
    char arrChar[3] = {'a', 'b', 'c'};
    iter(arrChar, 3, toUpperCase);
    iter(arrChar, 3, print);
    int arr[3] = {1, 2, 3};
    iter(arr, 3, increment);
    iter(arr, 3, print); 
}
