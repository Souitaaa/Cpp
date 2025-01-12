/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 21:15:16 by csouita           #+#    #+#             */
/*   Updated: 2025/01/12 18:35:46 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "Phonebook.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
#include <unistd.h>
#include "main.hpp"


int main()
{
    PhoneBook PhoneBook;
    std::string command;
    std::string FirstName ;
    std::string LastName ;
    std::string NickName ;
    std::string PhoneNumber ;
    std::string DarkestSecret ;

    while(1)
    {
        std::cout << "Enter a Command " << std::endl;
        std::getline(std::cin , command);
        if (std::cin.eof())
            return 0;
        if(command == "EXIT")
            return 0;
        else if(command == "ADD")
        {
            std::cout << "Enter The First Name :";
            std::getline(std::cin , FirstName);
            if (std::cin.eof())
                return 0;
            std::cout << "Enter The Last Name :";
            std::getline(std::cin , LastName);
            if (std::cin.eof())
                return 0;
            std::cout << "Enter The Nick Name :";
            std::getline(std::cin , NickName);
            if (std::cin.eof())
                return 0;
            std::cout << "Enter The Phone Number :";
            std::getline(std::cin , PhoneNumber);
            if (std::cin.eof())
                return 0;
            std::cout << "Enter The Darkest Secret :";
            std::getline(std::cin , DarkestSecret);
            if (std::cin.eof())
                return 0;
            PhoneBook.AddContact(FirstName , LastName , NickName , PhoneNumber , DarkestSecret);
        }
        else if(command == "SEARCH")
        {
            PhoneBook.DisplayContact();
            std::string input;
            std::cout << "Enter The Index :" << std::endl;
            std::getline(std::cin , input);
            if (std::cin.eof())
                return 0;
            PhoneBook.DisplayContacts(input);
        }
        else
            std::cout << "Command Not Found" << std::endl;
    }
}