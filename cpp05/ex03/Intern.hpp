/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/20 00:54:43 by mongool           #+#    #+#             */
/*   Updated: 2025/07/03 23:17:35 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include <string>
class AForm ;
class Intern 
{
    public :
        Intern();
        virtual ~Intern();
        Intern(const Intern &other);
        Intern &operator=(const Intern &other);
        AForm *makeForm(const std::string &Name , const std::string &target);
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