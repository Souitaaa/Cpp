/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 01:19:53 by csouita           #+#    #+#             */
/*   Updated: 2025/06/13 00:45:18 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP
#include <iostream>
#include <stdexcept>
#include <string>
// #include "Bureaucrat.hpp"
class Bureaucrat; 
class Form {
    private: 
        const std::string Name;
        bool isSigned ;
        const int requiredGradeToSign;
        const int requiredGradeToExecute;
    public:
        Form(std::string name, int requiredGradeToSign, int requiredGradeToExecute);
        ~Form();
        std::string getName() const;
        bool getIsSigned() const;
        int getRequiredGradeToSign() const;
        int getRequiredGradeToExecute() const;
        void beSigned(const Bureaucrat &bureaucrat);
        
    class GradeTooLowException : public std::exception
    {
        private :
            std::string msg ;   
        public : 
        GradeTooLowException(const std::string &message) : msg(message) {}
        virtual ~GradeTooLowException() throw () {}
        virtual const char* what() const throw ()
        {
            return (msg.c_str());
        }   
    };

    class GradeTooHighException : public std::exception
    {
        private :
            std::string msg ;   
        public : 
        GradeTooHighException(const std::string &message) : msg(message) {}
        virtual ~GradeTooHighException() throw () {}
        virtual const char* what() const throw ()
        {
            return (msg.c_str());
        }   
    };
};
std::ostream &operator<<(std::ostream &o, const Form &form);
#endif