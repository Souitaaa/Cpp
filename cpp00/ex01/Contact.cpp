/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:42:58 by csouita           #+#    #+#             */
/*   Updated: 2025/01/10 23:06:17 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <string> 


void Contact::SetFirstName(std::string E_FirstName){
    FirstName = E_FirstName;
}
void Contact::SetDarkestSecret(std::string E_DarkestSecret){
    DarkestSecret = E_DarkestSecret;
}   
void Contact::SetLastName(std::string E_LastName){
    LastName = E_LastName;
}
void Contact::SetNickName(std::string E_NickName){
    NickName = E_NickName;
}
void Contact::SetPhoneNumber(std::string E_PhoneNumber){
    PhoneNumber = E_PhoneNumber;
}
std::string Contact::GetDarkestSecret(){
    return DarkestSecret;
}
std::string Contact::GetFirstName(){
    return FirstName;
}
std::string Contact::GetLastName(){
    return LastName;
}
std::string Contact::GetNickName(){
    return NickName;
}
std::string Contact::GetPhoneNumber(){
    return PhoneNumber;
}
