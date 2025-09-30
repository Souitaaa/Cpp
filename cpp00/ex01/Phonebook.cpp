/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:30:21 by csouita           #+#    #+#             */
/*   Updated: 2025/08/02 17:04:25 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

void PhoneBook::AddContact(std::string FirstName, std::string LastName, std::string NickName, std::string PhoneNumber, std::string DarkestSecret)
{
    int f = 0;
    int i = 0;

    if (FirstName.empty())
    {
        std::cout << "First name is required" << std::endl;
        f = 1;
    }

    for (i = 0; FirstName[i] != '\0'; i++)
    {
        if (!isalpha(FirstName[i]))
        {
            if (NickName[i] == ' ' || NickName[i] == '\t')
                continue;
            else
            {
                std::cout << "First name must contain only letters" << std::endl;
                f = 1;
                i = 0;
                break;
            }
        }
    }

    if (LastName.empty())
    {
        std::cout << "Last name is required" << std::endl;
        f = 1;
    }

    for (i = 0; LastName[i] != '\0'; i++)
    {
        if (!isalpha(LastName[i]))
        {
            if (NickName[i] == ' ' || NickName[i] == '\t')
                continue;
            else
            {
                std::cout << "Last name must contain only letters" << std::endl;
                f = 1;
                i = 0;
                break;
            }
        }
    }

    if (NickName.empty())
    {
        std::cout << "Nickname is required" << std::endl;
        f = 1;
    }

    if (PhoneNumber.empty())
    {
        std::cout << "Phone number is required" << std::endl;
        f = 1;
    }

    for (i = 0; PhoneNumber[i]; i++)
    {
        if (!isdigit(PhoneNumber[i]))
        {
            if (NickName[i] == ' ' || NickName[i] == '\t')
                continue;
            else
            {
                std::cout << "Phone number must contain only numbers" << std::endl;
                f = 1;
                i = 0;
                break;
            }
        }
    }

    if (DarkestSecret.empty())
    {
        std::cout << "Darkest secret is required" << std::endl;
        f = 1;
    }

    if (f == 1)
        return;
    Contacts[OldestContactIndex].SetFirstName(FirstName);
    Contacts[OldestContactIndex].SetLastName(LastName);
    Contacts[OldestContactIndex].SetNickName(NickName);
    Contacts[OldestContactIndex].SetPhoneNumber(PhoneNumber);
    Contacts[OldestContactIndex].SetDarkestSecret(DarkestSecret);
    if (ContactCount < 8)
        ContactCount++;
    OldestContactIndex = (OldestContactIndex + 1) % 8;
}

std::string PhoneBook::TruncateString(std::string str)
{
    if (str.length() > 10)
    {
        return str.substr(0, 9) + ".";
    }
    return str;
}

void PhoneBook::DisplayContact()
{
    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;
    for (int i = 0; i < ContactCount; ++i)
    {
        std::cout << std::setw(10) << i << "|"
                  << std::setw(10) << TruncateString(Contacts[i].GetFirstName()) << "|"
                  << std::setw(10) << TruncateString(Contacts[i].GetLastName()) << "|"
                  << std::setw(10) << TruncateString(Contacts[i].GetNickName()) << std::endl;
    }
}

bool PhoneBook::DisplayContacts(std::string index)
{
    int idx;
    std::stringstream ss(index);
    ss >> idx;
    if ((ss.fail() && !ss.eof()) || ((!ss.fail() && !ss.eof())) || (idx < 0 || idx >= ContactCount))
    {
        std::cout << "The index is out of range" << std::endl;
        return false;
    }
    if (idx >= 0 && idx < ContactCount)
        Contact Contact = Contacts[idx];
    std::cout << "First Name: " << Contacts[idx].GetFirstName() << std::endl;
    std::cout << "Last Name: " << Contacts[idx].GetLastName() << std::endl;
    std::cout << "Nickname: " << Contacts[idx].GetNickName() << std::endl;
    std::cout << "Phone Number: " << Contacts[idx].GetPhoneNumber() << std::endl;
    std::cout << "Darkest Secret: " << Contacts[idx].GetDarkestSecret() << std::endl;
    return true;
}
