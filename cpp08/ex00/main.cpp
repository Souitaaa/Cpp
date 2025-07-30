/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:52:45 by mongool           #+#    #+#             */
/*   Updated: 2025/07/30 21:12:34 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <vector>
#include <stdexcept>
#include "easyfind.hpp"


int main(void)
{
	std::vector<int> v;
	for (int i = 0; i < 10; i++)
		v.push_back(i);
		
	try
	{
		easyfind(v, 5);
		easyfind(v, 0);
		easyfind(v, 13);
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	return (0);
}
