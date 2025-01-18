/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 22:30:10 by csouita           #+#    #+#             */
/*   Updated: 2025/01/18 23:39:29 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook {
    private :
        Contact Contacts[8];
        int ContactCount;
        int OldestContactIndex; 
    public :
    PhoneBook()
    {
        ContactCount = 0;
        OldestContactIndex = 0; 
    }
    void AddContact(std::string FirstName, std::string LastName, std::string NickName, std::string PhoneNumber, std::string DarkestSecret);
    void DisplayContact();
    bool DisplayContacts(std::string index);
    std::string TruncateString(std::string str);
};
#endif
