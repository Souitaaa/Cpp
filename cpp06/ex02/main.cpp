/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:52:45 by mongool           #+#    #+#             */
/*   Updated: 2025/07/14 17:28:39 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

// Function prototypes
// Function prototype

int main()
{
    // Generate a random Base-derived object
    Base* ptr = generate();

    // Identify using pointer
    std::cout << "Identify (pointer): ";
    identify(ptr);

    // Identify using reference
    std::cout << "Identify (reference): ";
    identify(*ptr);

    // Clean up
    delete ptr;

    return 0;
}