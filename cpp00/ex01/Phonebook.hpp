/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 22:30:10 by csouita           #+#    #+#             */
/*   Updated: 2025/01/08 22:00:24 by csouita          ###   ########.fr       */
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
    public :
        void AddContact(std::string FirstName , std::string LastName , std::string NickName , std::string PhoneNumber , std::string DarkestSecret);
};

#endif // PHONEBOOK_HPP