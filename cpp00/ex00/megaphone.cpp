/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 01:19:53 by csouita           #+#    #+#             */
/*   Updated: 2025/01/07 21:26:59 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


int main(int ac, char *av[])
{
    if (ac <= 1)
        std::cout << "LOUD AND UNBEARABLE FEEDBACK NOISE\n";
    else
    {
        for (int i = 1; i < ac; i++)
        {
            std::string str = av[i];
            for (size_t j = 0; j < str.length(); j++)
            {
                str[j] = std::toupper(str[j]);
            }
            std::cout << str;
        }
        std::cout << "\n";
    }
    return 0;
}
