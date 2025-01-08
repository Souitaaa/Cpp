/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pohonebook.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 21:30:21 by csouita           #+#    #+#             */
/*   Updated: 2025/01/08 22:03:14 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Phonebook.hpp"

void PhoneBook::AddContact(std::string FirstName , std::string LastName , std::string NickName , std::string PhoneNumber , std::string DarkestSecret)
{
    Contacts[0].SetFirstName(FirstName);
    Contacts[0].SetLastName(LastName);
    Contacts[0].SetNickName(NickName);
    Contacts[0].SetPhoneNumber(PhoneNumber);
}
