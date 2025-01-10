/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/08 16:29:41 by csouita           #+#    #+#             */
/*   Updated: 2025/01/10 21:53:58 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
#include <stdio.h>

class Contact {
    private :
        std::string FirstName;
        std::string LastName;
        std::string NickName;
        std::string PhoneNumber;
        std::string DarkestSecret;
    public :
        void SetFirstName(std::string FirstName);
        void SetLastName(std::string LastName);
        void SetNickName(std::string NickName);
        void SetPhoneNumber(std::string PhoneNumber);
        void SetDarkestSecret(std::string PhoneNumber);
        
        std::string GetFirstName();
        std::string GetLastName();
        std::string GetNickName();
        std::string GetPhoneNumber();
        std::string GetDarkestSecret();
};
#endif