/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 21:15:16 by csouita           #+#    #+#             */
/*   Updated: 2025/01/08 22:05:08 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
#include <unistd.h>

int main()
{
    PhoneBook PhoneBook;
    std::string command;
    while(1)
    {
        std::cout << "Enter a Command " << std::endl;
        std::getline(std::cin , command);
        if(command == "EXIT")
            _exit(0);
        std::cout << command << std::endl ; 
        if(command.compare("ADD"))
        {
            Contact newContact;
            PhoneBook.AddContact(PhoneBook);
        }
    }
}