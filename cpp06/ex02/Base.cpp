/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:52:45 by mongool           #+#    #+#             */
/*   Updated: 2025/07/14 17:47:18 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <stdlib.h>
#include <ctime>

Base::~Base() {} 

Base *Base::generate()
{
    std::srand(std::time(NULL));
    int i = std::rand() % 3;
    switch(i)
    {
        case 0:
            return new A();
        case 1:
            return new B();
        case 2:
            return new C();
        default:
            std::cout << "failed" << std::endl;
            return NULL;
    }
}

void Base::identify(Base *p)
{
    if(dynamic_cast<A*>(p))
        std::cout << "The actual type of the pointer is A" << std::endl;
    if (dynamic_cast<B *>(p))
        std::cout << "The actual type of the pointer is B" << std::endl;
    if (dynamic_cast<C *>(p))
        std::cout << "The actual type of the pointer is C" << std::endl;
}

void Base::identify(Base& p)
{
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "The actual type of the reference is A" << std::endl;
        return;
    } catch (...) {}

    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "The actual type of the reference is B" << std::endl;
        return;
    } catch (...) {}

    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "The actual type of the reference is C" << std::endl;
        return;
    } catch (...) {}
}
