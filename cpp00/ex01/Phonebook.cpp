/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:30:21 by csouita           #+#    #+#             */
/*   Updated: 2025/01/12 18:22:04 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook.hpp"
#include <iostream>
#include <string>
#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>

void PhoneBook::AddContact(std::string FirstName , std::string LastName , std::string NickName , std::string PhoneNumber , std::string DarkestSecret)
{
    if (FirstName.empty() || LastName.empty() || NickName.empty() || PhoneNumber.empty() || DarkestSecret.empty())
    {
        std::cout << "All fields are required" << std::endl;
        return;
    }
    if (ContactCount >= 8)
    {
        ContactCount = 0;
    }
    if (ContactCount < 8)
    {
        Contacts[ContactCount].SetFirstName(FirstName);
        Contacts[ContactCount].SetLastName(LastName);
        Contacts[ContactCount].SetNickName(NickName);
        Contacts[ContactCount].SetPhoneNumber(PhoneNumber);
        Contacts[ContactCount].SetDarkestSecret(DarkestSecret);
        ContactCount++;        
    } 
}

void PhoneBook::DisplayContact()
{
    std::cout << "     Index|First Name| Last Name|  Nickname" << std::endl;
    for (int i = 0; i < ContactCount; i++)
    {
        std::cout << "         " << i << "|";
        std::cout << Contacts[i].GetFirstName() << "|";
        std::cout << Contacts[i].GetLastName() << "|";
        std::cout << Contacts[i].GetNickName() << std::endl;
    }
}

void PhoneBook::DisplayContacts(std::string index)
{
    int idx;
    std::stringstream ss(index);
    ss >> idx;
    if (ss.fail() && !ss.eof())
    {
        std::cout << "The index is not valid" << std::endl;
        return;
    }
    if (idx >= 0 && idx < ContactCount)
    {
        std::cout << "First Name : " << Contacts[idx].GetFirstName() << std::endl;
        std::cout << "Last Name : " << Contacts[idx].GetLastName() << std::endl;
        std::cout << "Nick Name : " << Contacts[idx].GetNickName() << std::endl;
        std::cout << "Phone Number : " << Contacts[idx].GetPhoneNumber() << std::endl;
        std::cout << "Darkest Secret : " << Contacts[idx].GetDarkestSecret() << std::endl;
    }
    else
        std::cout << "The index is not valid" << std::endl;
}
