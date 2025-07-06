/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: csouita <csouita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/10 01:19:53 by csouita           #+#    #+#             */
/*   Updated: 2025/06/10 16:37:56 by csouita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <stdexcept>
#include <string> 
#include "Form.hpp"

// class GradeTooHighException : public std::exception
// {
// private:
//     std::string msg;
// public:
//     GradeTooHighException(const std::string &message) : msg(message) {}
//     virtual ~GradeTooHighException() throw() {}
//     virtual const char *what() const throw()
//     {
//         return msg.c_str();
//     }
// };

// class GradeTooLowException : public std::exception
// {
// private:
//     std::string msg;
// public:
//     GradeTooLowException(const std::string &message) : msg(message) {}
//     virtual ~GradeTooLowException() throw() {}
//     virtual const char *what() const throw()
//     {
//         return msg.c_str();
//     }
// };

// class BureaucratException : public std::exception
// {
// private:
//     std::string msg;
// public:
//     BureaucratException(const std::string &message) : msg(message) {}
//     virtual ~BureaucratException() throw() {}
//     virtual const char *what() const throw()
//     {
//         return msg.c_str();
//     }
// };

class Bureaucrat
{
private:
    const std::string name;
    int grade;

public:
    Bureaucrat(std::string name, int grade);
    ~Bureaucrat();
    Bureaucrat(const Bureaucrat& other);
    Bureaucrat& operator=(const Bureaucrat& other);
    std::string getName() const;
    int getGrade() const;
    void setGrade(int newGrade);
    void signForm(const Form &form) const;
    void incrementGrade();
    void decrementGrade();
    class GradeTooHighException : public std::exception
    {
    private:
        std::string msg;
    public:
        GradeTooHighException(const std::string &message) : msg(message) {}
        virtual ~GradeTooHighException() throw() {}
        virtual const char *what() const throw()
        {
            return msg.c_str();
        }
    };
    class GradeTooLowException : public std::exception
    {
    private:
        std::string msg;
    public:
        GradeTooLowException(const std::string &message) : msg(message) {}
        virtual ~GradeTooLowException() throw() {}
        virtual const char *what() const throw()
        {
            return msg.c_str();
        }
    };
};
std::ostream &operator<<(std::ostream &o, const Bureaucrat &bureaucrat);

#endif
