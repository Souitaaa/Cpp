/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/13 20:32:43 by csouita           #+#    #+#             */
/*   Updated: 2025/07/13 21:24:05 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"



int main()
{
    Data d;
    d.name = "salam hbabi";
    std::cout << d.name << std::endl;

    uintptr_t raw = Serializer::serialize(&d);

    Data* ptr = Serializer::deserialize(raw);

    if (ptr == &d)
    {
        std::cout << "Pointers are equal!" << std::endl;
        std::cout << ptr->name << std::endl;
    }
    else
        std::cout << "serialize is not working!" << std::endl;
} 