/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/25 18:21:31 by csouita           #+#    #+#             */
/*   Updated: 2025/01/28 17:24:06 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
    std::cout <<"[ DEBUG ] "<< std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info (void)
{
    std::cout <<"[ INFO ] "<< std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout <<"[ WARNING ] "<< std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout <<"[ ERROR ] "<< std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    void (Harl::*levels[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string levels_str[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0 ;
    for (i = 0 ; i < 4 ; i++)
    {
        if (level == levels_str[i])
            break;
    }
    switch (i)
    {
        case 0:
            (this->*levels[0])();
        case 1:
            (this->*levels[1])();
        case 2:
            (this->*levels[2])();
        case 3:
            (this->*levels[3])();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}

