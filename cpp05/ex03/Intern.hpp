/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mongool <mongool@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 00:54:43 by mongool           #+#    #+#             */
/*   Updated: 2025/06/20 02:14:48 by mongool          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
class Form ;
class Intern 
{
    public :
        Intern();
        virtual ~Intern();
        Form *makeForm(const std::string &Name , const std::string &target);
        class  FormNotFoundException : public std::exception
        {
            private :
                std::string msg ;
            public :
                FormNotFoundException(const std::string &message) : msg(message) {}
                virtual ~FormNotFoundException() throw () {}
                virtual const char* what() const throw ()
                {
                    return (msg.c_str());
                }
        };
};
#endif