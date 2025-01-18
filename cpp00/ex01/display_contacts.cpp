/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_contacts.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/10 21:24:23 by csouita           #+#    #+#             */
/*   Updated: 2025/01/18 22:19:37 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iomanip>
#include <iostream>

void PhoneBook::DisplayContacts()
{
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < contactCount; ++i)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << TruncateString(contacts[i].GetFirstName()) << "|"
                  << std::setw(10) << TruncateString(contacts[i].GetLastName()) << "|"
                  << std::setw(10) << TruncateString(contacts[i].GetNickName()) << std::endl;
    }
}

bool PhoneBook::DisplayContact(int index)
{
    if (index < 0 || index > contactCount)
    {
        return false;
    }
    const Contact& contact = contacts[index];
    std::cout << "First Name: " << contact.GetFirstName() << std::endl;
    std::cout << "Last Name: " << contact.GetLastName() << std::endl;
    std::cout << "Nickname: " << contact.GetNickName() << std::endl;
    std::cout << "Phone Number: " << contact.GetPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << contact.GetDarkestSecret() << std::endl;
    return true;
}

std::string PhoneBook::TruncateString(std::string str) 
{
    if (str.length() > 10)
    {
        return str.substr(0, 9) + ".";
    }
    return str;
}