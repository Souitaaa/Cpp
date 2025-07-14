/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/17 00:52:45 by mongool           #+#    #+#             */
/*   Updated: 2025/07/14 17:16:29 by csouita          ###   ########.fr       */
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
        std::cout << "The actual type is A" << std::endl;
    else if (dynamic_cast<B *>(p))
        std::cout << "The actual type is B" << std::endl;
    else if (dynamic_cast<C *>(p))
        std::cout << "The actual type is C" << std::endl;
    else 
        std::cout << "Failed to identify " << std::endl;
}

void Base::identify(Base& p)
{
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "The actual type is A" << std::endl;
    }
    catch (...)
    {
        std::cout << "is not type A" << std::endl;
    }
    try {
        (void)dynamic_cast<B&>(p);
            std::cout << "The actual type is B" << std::endl;
    }
    catch (...)
    {
        std::cout << "is not type B" << std::endl;
    }
    try {
        (void)dynamic_cast<C&>(p);
            std::cout << "The actual type is C" << std::endl;
    }
    catch (...)
    {
        std::cout << "is not type C" << std::endl;
    }
        
}
